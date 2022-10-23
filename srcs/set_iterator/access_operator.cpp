/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:39:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 18:12:24 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 14

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::const_iterator	it = this->begin(),
						ite = this->end();

	while (it != ite)
	{
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE(++it);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::test	(void)
{
	MAP::iterator	it = this->begin(),
					ite = this->end();

	while (it != ite)
	{
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE((*it).second -= 1);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE(it->second -= 1);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE(++it);
		_print_nl();
	}
}

int	main	(void)
{
	Test<MAP>		m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = i * i;

	m.test();
	m.const_test();
}
