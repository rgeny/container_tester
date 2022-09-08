/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:32:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:15 by rgeny            ###   ########.fr       */
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
					 size_t pos,
					 T value)
{
	try
	{
		_print_nl	(std::string("insert(v.begin() + ") +
					  test::to_string(pos) +
					  ", " +
					  test::to_string(value) +
					  ")");
		v.insert(v.begin() + pos, value);
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
					 size_t pos,
					 typename Class::size_type count,
					 T value)
{
	try
	{
		_print_nl	(std::string("insert(v.begin() + ") +
					  test::to_string(pos) +
					  ", " +
					  test::to_string(count) +
					  ", " +
					  test::to_string(value) +
					  ")");
		v.insert(v.begin() + pos, count, value);
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
					 size_t pos,
					 Class & v2,
					 size_t first,
					 size_t last)
{
	try
	{
		_print_nl	(std::string("insert(v.begin() + ") +
					  test::to_string(pos) +
					  ", v2.begin() + " +
					  test::to_string(first) +
					  ", v2.end() - " +
					  test::to_string(last) +
					  ")");
		v.insert(v.begin() + pos, v2.begin() + first, v2.end() - last);
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

	_test<int>	(v, 0, 3, 0);
	_test<int>	(v, 0, 2, 1);
	_test<int>	(v, 3, 1, 2);
	_test<int>	(v, v.size(), 4, 3);
	_test<int>	(v, v.size() - 7, 5, 4);
	_test<int>	(v, 0, 6, 5);
	_test<int>	(v, 0, 0, 6);

	NAMESPACE::vector<int>	v2;
	_test<int>	(v2, 0, v, 0, 0);
	_test<int>	(v2, v2.size() / 2, v, 0, 0);
	_test<int>	(v2, 0, v, v.size() / 2, 0);
	_test<int>	(v2, 0, v, 0, v.size() / 2);
	_test<int>	(v, v.size() / 4, v2, 0, 0);
	_test<int>	(v, 0, v2, v2.size() - 1, v2.size() - 1);
	_test<int>	(v, v.size() / 4, v2, v2.size(), v2.size());

	_test<int>	(v, 0, 7);
	_test<int>	(v, v.size(), 8);
	_test<int>	(v, v.size() / 2, 9);
	_test<int>	(v, 1, 10);
	_test<int>	(v, 2, 11);
	_test<int>	(v, 3, 12);
	_test<int>	(v, 4, 13);

//	_test<int>	(v2, -1, 10);
//	_test<int>	(v, v.size() + 1, 2, 7);
}

