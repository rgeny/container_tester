/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:51:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 13:58:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 25000

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP			m;

	for (int i = 0; i < SIZE; ++i)
	{
		m[i] = i;
		m.insert(MAP::value_type(i, i * i + 1));
	}

	for (int i = -10; i < SIZE + 10; ++i)
	{
		PRINT_EXECUTE(i);
		PRINT_EXECUTE(m.count(i));
	}
}
