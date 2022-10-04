/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:24:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 17:13:21 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE_VALUE 14
#define SIZE_POS 100000
#define SIZE_RANGE 25

typedef NAMESPACE::map<int, int>	MAP;

struct _InputIterator
	:private MAP::iterator
{
	typedef MAP::iterator					_iterator;
	typedef std::input_iterator_tag			iterator_category;
	typedef _iterator::value_type			value_type;
	typedef _iterator::difference_type		difference_type;
	typedef value_type const *				pointer;
	typedef value_type const &				reference;

	_InputIterator	(_InputIterator const & it)
		:_iterator(it)
	{	}
	_InputIterator	(MAP::iterator const & it)
		:_iterator(it)
	{	}
	~_InputIterator	(void)
	{	}

	_InputIterator &	operator= (_InputIterator & src)
	{
		_iterator &	it = *src._cast();
		_iterator::operator=(it);
		return (*this);
	}
	_InputIterator &	operator= (_iterator const & src)
	{
		_iterator::operator=(src);
		return (*this);
	}

	_InputIterator 	operator++	(int)
	{
		_InputIterator	tmp(*this);
		_iterator::operator++();
		return (tmp);
	}
	_InputIterator &	operator++	(void)
	{
		_iterator::operator++();
		return (*this);
	}

	bool	operator==	(_InputIterator const & rhs)
	{
		return (static_cast<MAP::iterator>(*this) == static_cast<MAP::iterator>(rhs));
	}
	bool	operator!=	(_InputIterator const & rhs)
	{
		return ( ! (*this == rhs) );
	}
	reference operator*	(void) const
	{
		return (_iterator::operator*());
	}
	pointer	operator->	(void) const
	{
		return (_iterator::operator->());
	}
	
	_iterator *	_cast	(void)
	{
		return (static_cast<_iterator *>(this));
	}
};

int	main	(void)
{
	MAP								m;
	std::pair<MAP::iterator, bool>	iterator_pair;
	MAP::iterator					it;

	_print_nl("NAMESPACE::pair< iterator, bool > insert(const value_type & value");
	for (int i = 0; i < SIZE_VALUE; ++i)
	{
		MAP::value_type		map_pair(i, -i),
							map_pair2(i, i * i + 1);
		iterator_pair = m.insert(map_pair);
		PRINT_EXECUTE(iterator_pair.first->first);
		PRINT_EXECUTE(iterator_pair.first->second);
		PRINT_EXECUTE(iterator_pair.second);
		iterator_pair = m.insert(map_pair2);
		PRINT_EXECUTE(iterator_pair.first->first);
		PRINT_EXECUTE(iterator_pair.first->second);
		PRINT_EXECUTE(iterator_pair.second);
		_print_nl();
	}

	m.clear();

	_print_nl();
	_print_nl();
	_print_nl("iterator insert(iterator hint, const value_type & value");
	it = m.begin();
	for (int i = 0; i < SIZE_POS; ++i)
	{
		MAP::value_type		map_pair(i, -i);
		it = m.insert(it, map_pair);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
	}

	_print_nl();
	_print_nl();
	_print_nl("template < typename InputIt > void insert(InputIt first, InputIt last)");

	MAP		m2;

	_InputIterator	iit = m.begin(),
					iite = m.begin();
	for (int i = 0; i < SIZE_RANGE / 2; ++i)
		iite++;
	m2.insert(iit, iite);

	for (iit = m2.begin(), iite = m2.end();
		 iit != iite;
		 ++iit)
	{
		std::cout	<< *iit
					<< std::endl;
	}

	m2.insert(_InputIterator(m2.begin()), _InputIterator(m2.end()));
	for (iit = m2.begin(), iite = m2.end();
		 iit != iite;
		 ++iit)
	{
		std::cout	<< *iit
					<< std::endl;
	}
}
