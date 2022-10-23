/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_end.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:27:32 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:09:56 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 13

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::test	(void)
{
	for (SET::iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		std::cout	<< *it
					<< std::endl;
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	for (SET::const_iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		std::cout	<< *it
					<< std::endl;
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
