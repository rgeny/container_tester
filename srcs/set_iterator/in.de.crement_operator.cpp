/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in.de.crement_operator.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:01:22 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:30:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 41


class String
{
	public:
		String	(void)
			:_str()
		{	}
		String	(String const & src)
			:_str(src._str)
		{	}
		String	(std::string const & str)
			:_str(str)
		{	}

		String &	operator=	(String const & src)
		{
			_str = src._str;
			return (*this);
		}

		bool	operator<	(String const & rhs) const
		{	return (_str < rhs._str);	}

		std::string		_str;
};

std::ostream &	operator<<	(std::ostream & os,
							 String const & src)
{
	os	<< src._str;

	return (os);
}

typedef NAMESPACE::set<String>	SET;

int	main	(void)
{
	SET					m;
	SET::iterator		it;
	SET::const_iterator	cit;
	std::string		str = "A";

	for (int i = 0; i < SIZE; ++i)
	{
		m.insert(str);
		if (str[0] == 'Z')
			str[0] = 'a';
		else
			str[0]++;
	}

	it = m.begin();
	cit = m.begin();
	_print_nl();
	_print_nl("pre-increment");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		PRINT_EXECUTE(*++it);
		PRINT_EXECUTE(*++cit);
	}

	it = m.end();
	cit = m.end();
	_print_nl();
	_print_nl("pre-decrement");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		PRINT_EXECUTE(*--it);
		PRINT_EXECUTE(*--cit);
	}
	
	it = m.begin();
	cit = m.begin();
	_print_nl();
	_print_nl("post-increment");
	for (int i = 0; i < SIZE - 1; ++i)
	{
		PRINT_EXECUTE(*it++);
		PRINT_EXECUTE(*cit++);
	}

	_print_nl();
	_print_nl("pos-decrement");
	for (int i = 0; i < SIZE; ++i)
	{
		PRINT_EXECUTE(*it--);
		PRINT_EXECUTE(*cit--);
	}
}
