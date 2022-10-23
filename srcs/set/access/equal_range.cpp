/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:06:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:00:06 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 6

typedef NAMESPACE::set<int>											SET;
typedef NAMESPACE::pair<SET::iterator, SET::iterator>				IT_PAIR;
typedef NAMESPACE::pair<SET::const_iterator, SET::const_iterator>	CIT_PAIR;

template < typename Container >
void	Test<Container>::test	(void)
{
	for (int i = -2; i < SIZE + 2; ++i)
	{
		int const	val = i;
		IT_PAIR		it = this->equal_range(val);

		PRINT_EXECUTE(*it.first);
		PRINT_EXECUTE(*it.second);
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

		PRINT_EXECUTE(*cit.first);
		PRINT_EXECUTE(*cit.second);
		_print_nl();
	}
}

int	main	(void)
{
	Test<SET>			m;
	
	for (int i = 0; i < SIZE; ++i)
	{
		m.insert(i);
		m.insert(SET::value_type(i));
	}

	m.test();
	m.const_test();
}
