/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:36:10 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:37:45 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	PRINT_EXECUTE(this->empty());
}

int	main	(void)
{
	Test<MAP>	m;

	m.const_test();
	m[1] = 2;
	m.const_test();

	return (0);
}
