/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:39:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:53:13 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE_M1 17
#define SIZE_M2 4
#define BIG_SIZE 100000

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET		m1, m2;

	for (int i = 0; i < SIZE_M1; ++i)
		m1.insert(-1 - i);
	for (int i = 0; i < SIZE_M2; ++i)
		m2.insert(i);

	PRINT_EXECUTE(m1.size());
	print_set(m1);
	PRINT_EXECUTE(m2.size());
	print_set(m2);

	m1.swap(m2);
	PRINT_EXECUTE(m1.size());
	print_set(m1);
	PRINT_EXECUTE(m2.size());
	print_set(m2);

	m2.swap(m1);
	PRINT_EXECUTE(m1.size());
	print_set(m1);
	PRINT_EXECUTE(m2.size());
	print_set(m2);

	NAMESPACE::swap(m1, m2);
	PRINT_EXECUTE(m1.size());
	print_set(m1);
	PRINT_EXECUTE(m2.size());
	print_set(m2);

	NAMESPACE::swap(m2, m1);
	PRINT_EXECUTE(m1.size());
	print_set(m1);
	PRINT_EXECUTE(m2.size());
	print_set(m2);


	for (int i = 0; i < BIG_SIZE; ++i)
		m1.insert(i);
	NAMESPACE::swap(m1, m2);

	return (0);
}
