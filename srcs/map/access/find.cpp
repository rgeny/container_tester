/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:59:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 14:03:51 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 13

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP						m;
	MAP::iterator			it;
	MAP::const_iterator		cit;

	for (int i = 0; i < SIZE; ++i)
		m[i] = 1 + i * i;
	
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int	const	tmp = i;

		it = m.find(tmp);
		cit = m.find(tmp);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_EXECUTE(cit->first);
		PRINT_EXECUTE(cit->second);
		_print_nl();
	}
}
