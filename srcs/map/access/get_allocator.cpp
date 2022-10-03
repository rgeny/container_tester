/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:51:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 12:55:51 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 27

typedef NAMESPACE::map<int, int, std::less<int>, std::allocator<long> >	MAP;

int	main	(void)
{
	MAP						m;

	for (int i = 0; i < SIZE; ++i)
		m[i * SIZE] = -i * i;
	
	MAP::allocator_type	alloc = m.get_allocator();

	PRINT_EXECUTE(m.max_size());
	PRINT_EXECUTE(alloc.max_size());
}
