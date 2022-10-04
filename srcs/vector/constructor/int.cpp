/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:33:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 17:41:25 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

typedef NAMESPACE::vector<int>							VECTOR;
typedef NAMESPACE::vector<int, std::allocator<int> >	VECTALLOC;
typedef std::list<int>									LIST;
typedef _InputIterator<VECTOR>							InputIterator;
typedef _InputIterator<LIST>							LInputIterator;
typedef _InputIterator<VECTALLOC>						InputIteratorAlloc;

int	main	(void)
{
	{
		VECTOR	v1(7), v2(4);
		_print_val_and_size<int>(v1);
		_print_val_and_size<int>(v2);
	}

	_print_nl("dfl ctor : ");
	{
		VECTOR	v;

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<int>);
	}
	_print_nl("dfl ctor 2 : ");
	{
		VECTALLOC	v((std::allocator<int>()));

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<int>);
	}
	_print_nl("fill ctor : ");
	{
		VECTOR	v(3);
		_print_val_and_size<int>(v);
	}
	_print_nl("fill ctor 2 : ");
	{
		VECTOR	v(37, 4);
		_print_val_and_size<int>(v);
	}
	_print_nl("fill ctor 3 : ");
	{
		VECTALLOC	v(19, 3000000, (std::allocator<int>()));
		_print_val_and_size<int>(v);
	}
	_print_nl("range ctor : ");
	{
		VECTOR	v1(3, 17);
		VECTOR	v2(InputIterator(v1.begin()), InputIterator(v1.end()));

		_print_val_and_size<int>(v2);
	}
	_print_nl("range ctor 2 : ");
	{
		VECTOR	v1(8, 7);
		VECTALLOC	v2(InputIterator(v1.begin()), InputIterator(v1.end()), (std::allocator<int>()));

		_print_val_and_size<int>(v2);
	}
	_print_nl("range ctor 3 : ");
	{
		LIST	l(21, -7);
		VECTALLOC	v(LInputIterator(l.begin()), LInputIterator(l.end()), (std::allocator<int>()));

		_print_val_and_size<int>(v);
	}
	_print_nl("copy ctor : ");
	{
		VECTOR	v(31, 84),
								v2(v);

		_print_val_and_size<int>(v2);
	}
}
