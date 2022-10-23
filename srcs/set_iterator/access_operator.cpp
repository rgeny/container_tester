/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:39:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:39:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 'z'

typedef NAMESPACE::set<std::string>	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	SET::const_iterator	it = this->begin(),
						ite = this->end();

	while (it != ite)
	{
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->size());
		PRINT_AND_EXECUTE(++it);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::test	(void)
{
	SET::iterator	it = this->begin(),
					ite = this->end();

	while (it != ite)
	{
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->size());
		PRINT_AND_EXECUTE(++it);
		_print_nl();
	}
}

int	main	(void)
{
	Test<SET>		m;
	std::string	str;

	for (char c = 'a'; c <= SIZE; ++c)
	{
		str += c;
		m.insert(str);
	}

	m.test();
	m.const_test();
}
