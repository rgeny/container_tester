/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:51:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:14:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 27

typedef NAMESPACE::map<int, int, std::less<int>, std::allocator<long> >	MAP;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	typename Container::allocator_type	alloc = this->get_allocator();

	PRINT_EXECUTE(this->max_size());
	PRINT_EXECUTE(alloc.max_size());
}

int	main	(void)
{
	Test<MAP>	m;

	for (int i = 0; i < SIZE; ++i)
		m[i * SIZE] = -i * i;

	m.const_test();
}
