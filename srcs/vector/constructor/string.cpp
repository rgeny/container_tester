/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:33:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/31 14:51:52 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	_print_nl("dfl ctor : ");
	{
		NAMESPACE::vector<std::string>	v;

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<std::string>);
	}
	_print_nl("dfl ctor 2 : ");
	{
		NAMESPACE::vector<std::string, std::allocator<std::string> >	v((std::allocator<std::string>()));

		_print_size(v);
		std::for_each(v.begin(), v.end(), _print_val<std::string>);
	}
	_print_nl("fill ctor : ");
	{
		NAMESPACE::vector<std::string>	v(1);
		_print_val_and_size<std::string>(v);
	}
	_print_nl("fill ctor 2 : ");
	{
		NAMESPACE::vector<std::string>	v(37, "abc");
		_print_val_and_size<std::string>(v);
	}
	_print_nl("fill ctor 3 : ");
	{
		NAMESPACE::vector<std::string, std::allocator<std::string> >	v(19, "dawnidawjdioawndiuawdjawomdiwlahdawnud", (std::allocator<std::string>()));
		_print_val_and_size<std::string>(v);
	}
	_print_nl("range ctor : ");
	{
		NAMESPACE::vector<std::string>	v1(3, "def");
		NAMESPACE::vector<std::string>	v2(v1.begin(), v1.end());

		_print_val_and_size<std::string>(v2);
	}
	_print_nl("range ctor 2 : ");
	{
		NAMESPACE::vector<std::string>	v1(8, "ghi");
		NAMESPACE::vector<std::string, std::allocator<std::string> >	v2(v1.begin(), v1.end(), (std::allocator<std::string>()));

		_print_val_and_size<std::string>(v2);
	}
	_print_nl("range ctor 3 : ");
	{
		std::list<std::string>	l(21, "jklfseiofes");
		NAMESPACE::vector<std::string, std::allocator<std::string> >	v(l.begin(), l.end(), (std::allocator<std::string>()));

		_print_val_and_size<std::string>(v);
	}
	_print_nl("copy ctor : ");
	{
		NAMESPACE::vector<std::string>	v(31, "dnawiudjaw"),
								v2(v);

		_print_val_and_size<std::string>(v2);
	}
}
