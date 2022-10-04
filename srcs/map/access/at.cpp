/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:00:03 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 14:03:16 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 7

typedef NAMESPACE::map<size_t, float>	MAP;

int	main	(void)
{
	MAP	m;
	float		second = 7.3;
	
	for (size_t i = 0; i < SIZE; ++i, second *= ((float)i + 1))
		m[i] = second;

	MAP::mapped_type &	value = m.at(SIZE / 2);

	PRINT_EXECUTE(value);
	PRINT_EXECUTE( (&value == &m.at(SIZE / 2)) );
	PRINT_EXECUTE( (value = 9.7) );

	for (size_t i = 0; i <= SIZE; ++i)
	{
		TRY_CATCH
		(
			std::cout	<< "(i=="
						<< i
						<< ")";
			PRINT_EXECUTE(m.at(i));
		)
	}
}
