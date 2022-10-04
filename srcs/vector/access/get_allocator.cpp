/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:14:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/19 14:24:35 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

typedef NAMESPACE::vector<int, std::allocator<long> >	VECTOR;

int	main	(void)
{
	VECTOR					v(10, 10);
	VECTOR::allocator_type	alloc = v.get_allocator();

	PRINT_EXECUTE(v.max_size());
	PRINT_EXECUTE(alloc.max_size());
}
