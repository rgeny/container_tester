/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_bound.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:15:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 14:17:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 9

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP						m;
	MAP::iterator			it;
	MAP::const_iterator		cit;

	for (int i = 0; i < SIZE; ++i)
		m[i] = i;
	
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;

		it = m.lower_bound(val);
		cit= m.lower_bound(val);

		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_EXECUTE(cit->first);
		PRINT_EXECUTE(cit->second);
		_print_nl();
	}
}
