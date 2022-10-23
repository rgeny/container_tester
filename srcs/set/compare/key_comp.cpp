/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_comp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:22:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:07:00 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 'f'

typedef NAMESPACE::set<char>	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	SET::key_compare	key_comp = this->key_comp();

	for (SET::const_iterator it = this->begin(), ite = this->end();
		 it != ite;
		 ++it)
	{
		for (SET::const_iterator it2 = this->begin(), ite2 = this->end();
			 it2 != ite2;
			 ++it2)
		{
			PRINT_EXECUTE(key_comp(*it, *it2));
		}
	}
}

int	main	(void)
{
	Test<SET>		m;
	for (char c = 'a'; c < SIZE; ++c)
		m.insert(c);

	m.const_test();
}
