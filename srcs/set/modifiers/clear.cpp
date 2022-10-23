/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:10:54 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:37:36 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 98

int	main	(void)
{
	NAMESPACE::set<int>	m;

	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());
	PRINT_AND_EXECUTE(m.clear());
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());

	PRINT_EXECUTE(SIZE);
	PRINT_AND_EXECUTE
	(
		for (int i = 0; i < SIZE; ++i)
			m.insert(-i);
	)

	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());
	PRINT_AND_EXECUTE(m.clear());
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());
	PRINT_AND_EXECUTE(m.clear());
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());
}
