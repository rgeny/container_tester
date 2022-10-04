/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 15:10:34 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 17

int	main	(void)
{
	NAMESPACE::map<int, int>	m;

	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.max_size());
	PRINT_EXECUTE(m.empty());

	for (int i = 0; i < SIZE; ++i)
		m[i] = i * i * i * i * i;
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.max_size());
	PRINT_EXECUTE(m.empty());

	m.clear();
	PRINT_EXECUTE(m.size());
	PRINT_EXECUTE(m.max_size());
	PRINT_EXECUTE(m.empty());

	return (0);
}