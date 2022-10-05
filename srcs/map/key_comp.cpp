/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_compare.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 16:20:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 4

typedef NAMESPACE::map<int, std::string>	MAP;

int	main	(void)
{
	MAP		m;
	MAP::key_compare	key_comp = m.key_comp();
	for (int i = 0; i < SIZE; ++i)
		m[i] = 'a' + i;
	
	for (MAP::iterator it = m.begin(), ite = m.end();
		 it != ite;
		 ++it)
	{
		for (MAP::iterator it2 = m.begin(), ite2 = m.end();
			 it2 != ite2;
			 ++it2)
		{
			PRINT_EXECUTE(key_comp(it->first, it2->first));
		}
	}
}
