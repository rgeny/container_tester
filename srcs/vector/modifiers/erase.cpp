/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:46:09 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:20 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include "test_string.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class v,
					 int pos)
{
	try
	{
		std::cout	<< std::endl;
		_print_nl	(std::string("erase(v.begin() + ") +
					 test::to_string(pos) +
					 ");");
		std::cout	<< "v.erase(v.begin() + pos) - v.begin() == "
					<< (v.erase(v.begin() + pos) - v.begin())
					<< std::endl;
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
static void	_test	(Class v,
					 int first,
					 int last)
{
	try
	{
		std::cout	<< std::endl;
		_print_nl	(std::string("erase(v.begin() + ") +
					 test::to_string(first) +
					 ", v.end() - " +
					 test::to_string(last) +
					 ");");
		v.erase(v.begin() + first, v.end() - last);
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
	NAMESPACE::vector<std::string>	v(26);

	for (size_t i = 0; i < 26; i++)
		v[i] = i + 'a';

	_test<std::string>(v, 1);
	_test<std::string>(v, v.size() - 1);
	_test<std::string>(v, v.size());
	_test<std::string>(v, v.size() + 10);
	_test<std::string>(v, 0);

//	_test<std::string>(v, -1);

	_test<std::string>(v, 0, 0);
	_test<std::string>(v, 0, v.size() - 1);
	_test<std::string>(v, 0, v.size());
//	_test<std::string>(v, 0, v.size() + 1);
//	_test<std::string>(v, 0, v.size() + 10);
	_test<std::string>(v, 1, 0);
	_test<std::string>(v, v.size() / 2, 0);
	_test<std::string>(v, v.size() - 1, 0);
}
