/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:09:36 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:45:06 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 64

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET				m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(i);
	
	print_set(m);
	m.erase(m.find(SIZE / 2));
	print_set(m);

	for (int i = 0, size = m.size(); i < size ; ++i)
		m.erase(m.begin());
	print_set(m);
	
	for (int i = 0; i < SIZE; ++i)
		m.insert(i);

	SET::iterator	it2 = m.begin(),
					ite = m.begin();
	
	print_set(m);
	for (int i = 0; i < 4; ++i, ++it2, ++ite);
	for (int i = 0; i < 17; ++i, ++ite);

	m.erase(it2, ite);
	print_set(m);
	m.erase(m.begin(), ++m.end());
	print_set(m);
	m.erase(m.begin(), ++m.end());
	print_set(m);
	m.erase(m.begin(), m.end());
	print_set(m);

	for (int i = 0; i < SIZE; ++i)
		m.insert(i);
	print_set(m);
	PRINT_EXECUTE(m.erase(7));
	PRINT_EXECUTE(m.erase(91));
	PRINT_EXECUTE(m.erase(-4));
	PRINT_EXECUTE(m.erase(14));
	PRINT_EXECUTE(m.erase(14));
	PRINT_EXECUTE(m.erase(17));
	PRINT_EXECUTE(m.erase(0));
	print_set(m);
	
	for (int i = 0; i < SIZE; ++i)
		PRINT_EXECUTE(m.erase(i));
	print_set(m);
}
