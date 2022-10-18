/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_operator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:26:29 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 18:15:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 19

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::test	(void)
{
	MAP::iterator	it = this->begin(),
					ite= this->end();

	for (int i = 0; i < SIZE * 2; ++i, ++it)
	{
		PRINT_EXECUTE(i);
		PRINT_EXECUTE(it == ite);
		PRINT_EXECUTE(it != ite);
		_print_nl();
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::const_iterator	it	= this->begin(),
						ite	= this->end();

	for (int i = 0; i < SIZE * 2; ++i, ++it)
	{
		PRINT_EXECUTE(i);
		PRINT_EXECUTE(it == ite);
		PRINT_EXECUTE(it != ite);
		_print_nl();
	}
}

int	main	(void)
{
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = i;
	
	m.test();
	m.const_test();
}
