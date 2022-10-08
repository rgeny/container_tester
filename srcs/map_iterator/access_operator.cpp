/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:39:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 13:47:37 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 14

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP		m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = i * i;
	
	MAP::iterator	it = m.begin(),
					ite= m.end();

	while (it != ite)
	{
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE((*it).second -= 1);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE(it->second -= 1);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_AND_EXECUTE(++it);
		_print_nl();
	}
}
