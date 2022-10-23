/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_comp.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:07:42 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 4

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	SET::value_compare	value_comp = this->value_comp();

	for (SET::const_iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		for (SET::const_iterator it2 = this->begin(), ite2 = this->end();
			 it2 != ite2;
			 ++it2)
		{
			PRINT_EXECUTE(value_comp(*it, *it2));
		}
	}
}

int	main	(void)
{
	Test<SET>		m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(i);

	m.const_test();
}
