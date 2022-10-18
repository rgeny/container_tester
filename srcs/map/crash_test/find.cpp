/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:53:08 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:54:28 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::iterator	it = this->find(1);
}

int	main	(void)
{
	Test<MAP>	m;

	m[1] = 4;
	m.const_test();
}
