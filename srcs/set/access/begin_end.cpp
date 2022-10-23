/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_end.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:27:32 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:31:16 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 13

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::test	(void)
{
	for (MAP::iterator it = this->begin(), ite = this->end();
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
	for (MAP::const_iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		std::cout	<< *it
					<< std::endl;
	}
}

int	main	(void)
{
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
		m[i] = -i;
	m.test();
	m.const_test();
}
