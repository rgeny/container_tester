/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:59:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:55:38 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 13

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::test	(void)
{
	SET::iterator	it;

	for (int i = -1; i < SIZE; ++i)
	{
		int const	tmp = i;

		it = this->find(tmp);

		PRINT_EXECUTE(*it);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	SET::const_iterator	it;

	for (int i = -1; i < SIZE; ++i)
	{
		int const	tmp = i;

		it = this->find(tmp);

		PRINT_EXECUTE(*it);
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
