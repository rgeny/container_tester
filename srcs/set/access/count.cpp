/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:51:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:54:24 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 25000

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	for (int i = -10; i < SIZE + 10; ++i)
	{
		PRINT_EXECUTE(i);
		PRINT_EXECUTE(this->count(i));
	}
}

int	main	(void)
{
	Test<SET>	m;

	for (int i = 0; i < SIZE; ++i)
	{
		m.insert(i);
		m.insert(SET::value_type(i));
	}

	m.const_test();
}
