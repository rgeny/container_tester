/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_bound.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:15:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:02:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 19

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::test	(void)
{
	SET::iterator			it;
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;

		it = this->upper_bound(val);

		PRINT_EXECUTE(*it);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	SET::const_iterator		cit;

	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;

		cit= this->upper_bound(val);

		PRINT_EXECUTE(*cit);
		_print_nl();
	}
}

int	main	(void)
{
	Test<SET>	m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(i);

	m.test();
	m.const_test();
}
