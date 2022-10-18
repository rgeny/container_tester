/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:51:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:48:04 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 25000

typedef NAMESPACE::map<int, int>	MAP;

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
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
	{
		m[i] = i;
		m.insert(MAP::value_type(i, i * i + 1));
	}

	m.const_test();
}
