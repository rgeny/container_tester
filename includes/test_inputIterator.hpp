/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_inputIterator.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:34:45 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 17:35:08 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_INPUTITERATOR_HPP
# define TEST_INPUTITERATOR_HPP

template < typename Container >
class _InputIterator
{
	public:
		typedef typename Container::iterator			_iterator;
		typedef std::input_iterator_tag					iterator_category;
		typedef typename _iterator::value_type			value_type;
		typedef typename _iterator::difference_type		difference_type;
		typedef value_type const *						pointer;
		typedef value_type const &						reference;

		_InputIterator	(_InputIterator const & it)
			:_it(it._it)
		{	}
		_InputIterator	(_iterator const & it)
			:_it(it)
		{	}
		~_InputIterator	(void)
		{	}

		_InputIterator &	operator= (_InputIterator & src)
		{
			_it = src._it;
			return (*this);
		}
		_InputIterator &	operator= (_iterator const & src)
		{
			_it = src;
			return (*this);
		}

		_InputIterator 	operator++	(int)
		{
			_InputIterator	tmp(*this);
			++_it;
			return (tmp);
		}
		_InputIterator &	operator++	(void)
		{
			++_it;
			return (*this);
		}

		bool	operator==	(_InputIterator const & rhs)
		{
			return (_it == rhs._it);
		}
		bool	operator!=	(_InputIterator const & rhs)
		{
			return ( _it != rhs._it );
		}
		reference operator*	(void) const
		{
			return (*_it);
		}
		pointer	operator->	(void) const
		{
			return (_it.operator->());
		}

	private:
		_iterator	_it;
};

#endif

