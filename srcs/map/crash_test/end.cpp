/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:32:20 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:34:26 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	MAP::iterator	it = this->end();
}

int	main	(void)
{
	Test<MAP>	m;

	m.const_test();
}
