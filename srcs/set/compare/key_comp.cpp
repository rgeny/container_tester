/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_comp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 17:05:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 4

typedef NAMESPACE::map<int, std::string>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::key_compare	key_comp = this->key_comp();

	for (MAP::const_iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		for (MAP::const_iterator it2 = this->begin(), ite2 = this->end();
			 it2 != ite2;
			 ++it2)
		{
			PRINT_EXECUTE(key_comp(it->first, it2->first));
		}
	}
}

int	main	(void)
{
	Test<MAP>		m;
	for (int i = 0; i < SIZE; ++i)
		m[i] = 'a' + i;

	m.const_test();
}
