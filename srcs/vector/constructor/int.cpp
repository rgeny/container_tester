/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:33:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/01 14:57:09 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	{
		NAMESPACE::vector<int>	v1(7), v2(4);
		_print_val_and_size<int>(v1);
		_print_val_and_size<int>(v2);
	}

	_print_nl("dfl ctor : ");
	{
		NAMESPACE::vector<int>	v;

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<int>);
	}
	_print_nl("dfl ctor 2 : ");
	{
		NAMESPACE::vector<int, std::allocator<int> >	v((std::allocator<int>()));

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<int>);
	}
	_print_nl("fill ctor : ");
	{
		NAMESPACE::vector<int>	v(3);
		_print_val_and_size<int>(v);
	}
	_print_nl("fill ctor 2 : ");
	{
		NAMESPACE::vector<int>	v(37, 4);
		_print_val_and_size<int>(v);
	}
	_print_nl("fill ctor 3 : ");
	{
		NAMESPACE::vector<int, std::allocator<int> >	v(19, 3000000, (std::allocator<int>()));
		_print_val_and_size<int>(v);
	}
	_print_nl("range ctor : ");
	{
		NAMESPACE::vector<int>	v1(3, 17);
		NAMESPACE::vector<int>	v2(v1.begin(), v1.end());

		_print_val_and_size<int>(v2);
	}
	_print_nl("range ctor 2 : ");
	{
		NAMESPACE::vector<int>	v1(8, 7);
		NAMESPACE::vector<int, std::allocator<int> >	v2(v1.begin(), v1.end(), (std::allocator<int>()));

		_print_val_and_size<int>(v2);
	}
	_print_nl("range ctor 3 : ");
	{
		std::list<int>	l(21, -7);
		NAMESPACE::vector<int, std::allocator<int> >	v(l.begin(), l.end(), (std::allocator<int>()));

		_print_val_and_size<int>(v);
	}
	_print_nl("copy ctor : ");
	{
		NAMESPACE::vector<int>	v(31, 84),
								v2(v);

		_print_val_and_size<int>(v2);
	}
}
