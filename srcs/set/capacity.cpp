/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:49:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:36:47 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 17

typedef NAMESPACE::set<int>	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	PRINT_EXECUTE(this->size());
	PRINT_EXECUTE(this->max_size());
	PRINT_EXECUTE(this->empty());
}

int	main	(void)
{
	Test<SET>	m;
	
	m.const_test();
	for (int i = 0; i < SIZE; ++i)
		m.insert(i * i * i * i * i);
	m.const_test();
	m.clear();
	m.const_test();
	return (0);
}
