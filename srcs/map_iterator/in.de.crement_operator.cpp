/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in.de.crement_operator.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:01:22 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 12:05:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 41


class Test
{
	public:
		Test	(void)
			:_str()
		{	}
		Test	(Test const & src)
			:_str(src._str)
		{	}
		Test	(std::string const & str)
			:_str(str)
		{	}

		Test &	operator=	(Test const & src)
		{
			_str = src._str;
			return (*this);
		}

		bool	operator<	(Test const & rhs) const
		{	return (_str < rhs._str);	}

		std::string		_str;
};

std::ostream &	operator<<	(std::ostream & os,
							 Test const & src)
{
	os	<< src._str;

	return (os);
}

typedef NAMESPACE::map<Test, int>	MAP;

int	main	(void)
{
	MAP				m;
	MAP::iterator	it;
	std::string		str = "A";

	for (int i = 0; i < SIZE; ++i)
	{
		m[str] = i;
		if (str[0] == 'Z')
			str[0] = 'a';
		else
			str[0]++;
	}

	it = m.begin();
	_print_nl();
	_print_nl("pre-increment");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		std::cout	<< *++it
					<< std::endl;
	}

	it = m.end();
	_print_nl();
	_print_nl("pre-decrement");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		std::cout	<< *--it
					<< std::endl;
	}
	
	it = m.begin();
	_print_nl();
	_print_nl("post-increment");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		std::cout	<< *it++
					<< std::endl;
	}

	_print_nl();
	_print_nl("pos-decrement");
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout	<< *it--
					<< std::endl;
	}
}
