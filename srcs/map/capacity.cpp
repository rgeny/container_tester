/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:42:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 17

typedef NAMESPACE::map<int, int>	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	PRINT_EXECUTE(this->size());
	PRINT_EXECUTE(this->max_size());
	PRINT_EXECUTE(this->empty());
}

int	main	(void)
{
	Test<MAP>	m;
	
	m.const_test();
	for (int i = 0; i < SIZE; ++i)
		m[i] = i * i * i * i * i;
	m.const_test();
	m.clear();
	m.const_test();
	return (0);
}
