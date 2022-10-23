/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:51:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:35:34 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 27

typedef NAMESPACE::set<int, std::less<int>, std::allocator<long> >	SET;

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	typename Container::allocator_type	alloc = this->get_allocator();

	PRINT_EXECUTE(this->max_size());
	PRINT_EXECUTE(alloc.max_size());
}

int	main	(void)
{
	Test<SET>	m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(-i * i);

	m.const_test();
}
