/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:59:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:51:53 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 13

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::test	(void)
{
	MAP::iterator	it;

	for (int i = -1; i < SIZE; ++i)
	{
		int const	tmp = i;

		it = this->find(tmp);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::const_iterator	it;

	for (int i = -1; i < SIZE; ++i)
	{
		int const	tmp = i;

		it = this->find(tmp);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		_print_nl();
	}
}

int	main	(void)
{
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = 1 + i * i;

	m.test();
	m.const_test();
}
