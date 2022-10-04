/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_std_map.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:49:44 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 16:45:13 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <sstream>
#include <vector>

#define RESET "\033[0m"
#define COLOR_BACK "\033[47m" // white
#define COLOR_TEXT "\033[30m" // black
#define BLACK_NODE "\033[30m" // black
#define RED_NODE "\033[31m"   // red

//template
//<
//	typename T1,
//	typename T2
//>
//std::ostream &	operator<<	(std::ostream & os,
//							 std::pair<T1, T2> const & p)
//{
//	os	<< "("
//		<< p.first
//		<< ":"
//		<< p.second
//		<< ")";
//	return (os);
//}

namespace test
{
	template
	<
		class Key,
		class T,
		class Compare = std::less<Key>,
		class Allocator = std::allocator<std::pair<Key const, T> >
	>
	class map
		:public std::map<Key, T, Compare, Allocator>
	{
		public:
			typedef std::map<int, int>			MAP;
			typedef MAP::iterator				ITERATOR;
			typedef ITERATOR::_Base_ptr			NODE_BASE_PTR;
			typedef ITERATOR::_Link_type		NODE_PTR;

			void	print	(void)
			{
				NODE_BASE_PTR	node = this->begin()._M_node;
				while (node != node->_M_parent->_M_parent)
					node = node->_M_parent;

				size_t	height = _height(node);
				std::vector<std::string>	tree;

				tree.resize(height);
				_print(node, tree, 0);
				tree[height - 1] += RESET;
				std::cout	<< COLOR_BACK COLOR_TEXT
							<< std::endl;
				for (size_t i = 0; i < height; ++i)
					std::cout	<< tree[i]
								<< std::endl;
			}

		private:
			NODE_PTR	_cast	(NODE_BASE_PTR node)
			{
				return (static_cast<NODE_PTR>(node));
			}

			size_t	_height	(NODE_BASE_PTR & node)
			{
				if (node == NULL)
					return (1);
				return (1 + std::max(_height(node->_M_left), _height(node->_M_right)));
			}

			//	_strsize
			//	calculate true size of string despite non-ascii characters.
			size_t	_strsize	(std::string & str)
			{
				size_t	count = 0;

				for (size_t i = 0; i < str.size(); ++i)
				{
					std::string special = str.substr(i, 3);
					std::string	color = str.substr(i, 5);

					if (special == "─" ||
						special == "┌" ||
						special == "┐")
					{
						i += 2;
					}
					else if (color == COLOR_BACK ||
							 color == COLOR_TEXT ||
							 color == BLACK_NODE ||
							 color == RED_NODE)
					{
						i += 4;
						--count;
					}
					++count;
				}
				return (count);
			}

			void	_print	(NODE_BASE_PTR & node,
							 std::vector<std::string> & tree,
							 size_t depth,
							 size_t pos = 0,
							 size_t * left = NULL,
							 size_t * right = NULL)
			{
				//	align node
				for (size_t i = _strsize(tree[depth]); i < pos; ++i)
					tree[depth] += " ";

				//	end of recursive function
				if (node == NULL)
				{
					if (node != NULL && node->_M_color == std::_S_red)
						tree[depth] += RED_NODE "NIL" COLOR_TEXT;
					else
						tree[depth] += BLACK_NODE "NIL" COLOR_TEXT;
					if (left != NULL && right != NULL)
					{
						*left += 2;
						*right += 1;
					}
					return ;
				}

				//	count size of current value
				std::stringstream	ss;
				ss	<< static_cast<NODE_PTR>(node)->_M_value_field;
				size_t	cur_size = ss.str().size();

				//	execute the recursion
				size_t	ll = 0, lr = 0;
				_print(node->_M_left, tree, depth + 1, pos, &ll, &lr);
				size_t	rl = 0, rr = 0;
				_print(node->_M_right, tree, depth + 1, pos + ll + lr + 2 + cur_size, &rl, &rr);

				//	add left branch of current node
				for (size_t i = 0; i <= ll + lr; ++i)
				{
					if (i == ll - 1)

						tree[depth] += "┌";
					else if (i >= ll)
						tree[depth] += "─";
					else
						tree[depth] += " ";
				}

				//	add color of current node
				if (node->_M_color == std::_S_red)
					tree[depth] += RED_NODE;
				else
					tree[depth] += BLACK_NODE;

				//	add value
				tree[depth] += ss.str();
				tree[depth] += COLOR_TEXT;

				//	add right branch of current value
				for (size_t i = 0; i <= rl; ++i)
				{
					if (i == rl)
						tree[depth] += "┐";
					else
						tree[depth] += "─";
				}

				//	calculate the size of the display to the left and
				//	to the right of the current node for the parent.
				if (left != NULL && right != NULL)
				{
					*left = ll + lr + ((cur_size + 1) / 2) + 1;
					*right = rl + rr + (cur_size / 2) + 1;
				}
			}
	};
}

typedef std::pair<int, int>	PAIR;

int	main	(void)
{
	test::map<int, int>	m;

	for (int i = 0; i < 14; i += 2)
		m[i] = i;
	
	PAIR	tmp(7, 7);
	
	m.print();
	m.insert(tmp);
	m.print();
	m.erase(7);
	m.insert(m.begin(), tmp);
	m.print();
	for (int i = -1; i < 14; i += 2)
	{
		PAIR	p(i, i);
		int	j = 0;
		std::cout	<< "-------------------------------------------------------"
					<< std::endl;
		for (test::map<int, int>::iterator it = m.begin(), ite = m.end();
			 it != ite;
			 ++it, ++j)
		{
			m.insert(it, p);
			m.print();
			m.erase(i);
		}
	}
}
