/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_bound.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:15:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 17:00:32 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 9

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::test	(void)
{
	MAP::iterator			it;

	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;

		it = this->lower_bound(val);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::const_iterator		it;

	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;

		it = this->lower_bound(val);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		_print_nl();
	}
}

int	main	(void)
{
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = i;

	m.test();
	m.const_test();
}
