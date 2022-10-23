/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_operator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:26:29 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:34:04 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 19

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::test	(void)
{
	SET::iterator	it = this->begin(),
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
	SET::const_iterator	it	= this->begin(),
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
	Test<SET>	m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(i);
	
	m.test();
	m.const_test();
}
