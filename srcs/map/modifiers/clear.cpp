/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:10:54 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 15:14:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 98

int	main	(void)
{
	NAMESPACE::map<int, int>	m;

	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());
	PRINT_AND_EXECUTE(m.clear());
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.empty());

	PRINT_EXECUTE(SIZE);
	PRINT_AND_EXECUTE
	(
		for (int i = 0; i < SIZE; ++i)
			m[i] = -i;
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
