/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:39:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/17 21:50:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE_M1 17
#define SIZE_M2 4
#define BIG_SIZE 100000

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP		m1, m2;

	for (int i = 0; i < SIZE_M1; ++i)
		m1[i] = -1 - i;
	for (int i = 0; i < SIZE_M2; ++i)
		m2[-1 - i] = i;

	PRINT_EXECUTE(m1.size());
	print_map(m1);
	PRINT_EXECUTE(m2.size());
	print_map(m2);

	m1.swap(m2);
	PRINT_EXECUTE(m1.size());
	print_map(m1);
	PRINT_EXECUTE(m2.size());
	print_map(m2);

	m2.swap(m1);
	PRINT_EXECUTE(m1.size());
	print_map(m1);
	PRINT_EXECUTE(m2.size());
	print_map(m2);

	NAMESPACE::swap(m1, m2);
	PRINT_EXECUTE(m1.size());
	print_map(m1);
	PRINT_EXECUTE(m2.size());
	print_map(m2);

	NAMESPACE::swap(m2, m1);
	PRINT_EXECUTE(m1.size());
	print_map(m1);
	PRINT_EXECUTE(m2.size());
	print_map(m2);


	for (int i = 0; i < BIG_SIZE; ++i)
		m1[i] = i;
	NAMESPACE::swap(m1, m2);

	return (0);
}
