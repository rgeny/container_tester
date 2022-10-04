/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:33:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 18:17:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

typedef NAMESPACE::vector<std::string>									VECTOR;
typedef NAMESPACE::vector<std::string, std::allocator<std::string> >	VECTALLOC;
typedef std::list<std::string>											LIST;
typedef _InputIterator<VECTOR>											InputIterator;
typedef _InputIterator<LIST>											LInputIterator;
typedef _InputIterator<VECTALLOC>										InputIteratorAlloc;


int	main	(void)
{
	_print_nl("dfl ctor : ");
	{
		VECTOR	v;

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<std::string>);
	}
	_print_nl("dfl ctor 2 : ");
	{
		VECTALLOC	v((std::allocator<std::string>()));

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<std::string>);
	}
	_print_nl("fill ctor : ");
	{
		VECTOR	v(1);
		_print_val_and_size<std::string>(v);
	}
	_print_nl("fill ctor 2 : ");
	{
		VECTOR	v(37, "abc");
		_print_val_and_size<std::string>(v);
	}
	_print_nl("fill ctor 3 : ");
	{
		VECTALLOC	v(19, "dawnidawjdioawndiuawdjawomdiwlahdawnud", (std::allocator<std::string>()));
		_print_val_and_size<std::string>(v);
	}
	_print_nl("range ctor : ");
	{
		VECTOR	v1(3, "def");
		VECTOR	v2(InputIterator(v1.begin()), InputIterator(v1.end()));

		_print_val_and_size<std::string>(v2);
	}
	_print_nl("range ctor 2 : ");
	{
		VECTOR	v1(8, "ghi");
		VECTALLOC	v2(InputIterator(v1.begin()), InputIterator(v1.end()), (std::allocator<std::string>()));

		_print_val_and_size<std::string>(v2);
	}
	_print_nl("range ctor 3 : ");
	{
		LIST	l(21, "jklfseiofes");
		VECTALLOC	v(LInputIterator(l.begin()), LInputIterator(l.end()), (std::allocator<std::string>()));

		_print_val_and_size<std::string>(v);
	}
	_print_nl("copy ctor : ");
	{
		VECTOR	v(31, "dnawiudjaw"),
								v2(v);

		_print_val_and_size<std::string>(v2);
	}
}
