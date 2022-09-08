/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:29:45 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:25 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include "test_string.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class & v,
					 size_t n,
					 T const & val)
{
	try
	{
		_print_nl	(std::string("assign(") +
					 test::to_string(n) +
					 ", " +
					 test::to_string(val) +
					 ")");
		v.assign(n, val);
		_print_val_and_size<T>(v);
	}
	catch (std::exception const & err)
	{
		std::cout	<< "error"
					<< std::endl;
	}
}

template
<
	typename T,
	typename Class
>
static void	_test	(Class & v,
					 Class const & v2,
					 size_t first,
					 size_t last)
{
	try
	{
		_print_nl	(std::string("assign(v2.begin() + ") +
					 test::to_string(first) +
					 ", v2.end() - " +
					 test::to_string(last) +
					 ")");
		v.assign(v2.begin() + first, v2.end() - last);
		_print_val_and_size<T>(v);
	}
	catch (std::exception const & err)
	{
		std::cout	<< "error"
					<< std::endl;
	}
}

int	main	(void)
{
	NAMESPACE::vector<int>	v;
	_test<int>	(v, 0, 'a');
	_test<int>	(v, 17, 'b');
	_test<int>	(v, 3, 'c');
	_test<int>	(v, v.size(), 'd');
	_test<int>	(v, 98, 'e');
	_test<int>	(v, 0, 'f');
	_test<int>	(v, 39, 'g');

	NAMESPACE::vector<int>	v2, v3(17);
	_test<int>	(v2, v, 0, 0);
	_test<int>	(v2, v, 0, v.size());
	_test<int>	(v2, v, v.size(), 0);
	_test<int>	(v2, v, v.size(), v.size());
	_test<int>	(v2, v, v.size() - 1, v.size());
	_test<int>	(v2, v, v.size(), v.size() - 1);
	_test<int>	(v2, v, v.size() - 1, v.size() - 1);
	_test<int>	(v3, 0, 0);
}
