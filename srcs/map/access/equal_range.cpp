/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:06:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 14:13:51 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 6

typedef NAMESPACE::map<int, int>									MAP;
typedef NAMESPACE::pair<MAP::iterator, MAP::iterator>				IT_PAIR;
typedef NAMESPACE::pair<MAP::const_iterator, MAP::const_iterator>	CIT_PAIR;

int	main	(void)
{
	MAP			m;
	
	for (int i = 0; i < SIZE; ++i)
	{
		m[i] = i;
		m.insert(MAP::value_type(i, -i - 4));
	}
	
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;
		IT_PAIR		it = m.equal_range(val);
		CIT_PAIR	cit= m.equal_range(val);

		PRINT_EXECUTE(it.first->first);
		PRINT_EXECUTE(it.first->second);
		PRINT_EXECUTE(it.second->first);
		PRINT_EXECUTE(it.second->second);

		PRINT_EXECUTE(cit.first->first);
		PRINT_EXECUTE(cit.first->second);
		PRINT_EXECUTE(cit.second->first);
		PRINT_EXECUTE(cit.second->second);
		_print_nl();
	}
}
