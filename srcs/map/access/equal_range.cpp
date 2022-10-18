/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:06:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:57:48 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 6

typedef NAMESPACE::map<int, int>									MAP;
typedef NAMESPACE::pair<MAP::iterator, MAP::iterator>				IT_PAIR;
typedef NAMESPACE::pair<MAP::const_iterator, MAP::const_iterator>	CIT_PAIR;

template < typename Container >
void	Test<Container>::test	(void)
{
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;
		IT_PAIR		it = this->equal_range(val);

		PRINT_EXECUTE(it.first->first);
		PRINT_EXECUTE(it.first->second);
		PRINT_EXECUTE(it.second->first);
		PRINT_EXECUTE(it.second->second);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;
		CIT_PAIR	cit= this->equal_range(val);

		PRINT_EXECUTE(cit.first->first);
		PRINT_EXECUTE(cit.first->second);
		PRINT_EXECUTE(cit.second->first);
		PRINT_EXECUTE(cit.second->second);
		_print_nl();
	}
}

int	main	(void)
{
	Test<MAP>			m;
	
	for (int i = 0; i < SIZE; ++i)
	{
		m[i] = i;
		m.insert(MAP::value_type(i, -i - 4));
	}

	m.test();
	m.const_test();
}
