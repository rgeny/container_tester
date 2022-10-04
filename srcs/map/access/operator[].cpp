/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator[].cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:20:22 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 14:32:35 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 4

typedef NAMESPACE::map<short, int>	MAP;

int	main	(void)
{
	MAP	m;

	PRINT_EXECUTE(m.size());
	for (short i = 0; i < SIZE; ++i)
		m[i] = SIZE * SIZE * i;

	for (short i = 0; i < SIZE; ++i)
	{
		short const 	j = i;
		int const &		const_key = m[i];
		int &			key = m[j];

		std::cout	<< "i == j == "
					<< i
					<< std::endl;
		PRINT_EXECUTE(m[i]);
		PRINT_EXECUTE(m[j]);
		PRINT_EXECUTE(const_key);
		PRINT_EXECUTE(key);
		PRINT_EXECUTE( (&const_key == &m[i]) );
		PRINT_EXECUTE( (&key == &m[i]) );
	}
	PRINT_EXECUTE(m.size());
}
