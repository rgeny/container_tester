/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_size.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:33:16 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 14:35:48 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 1000000

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	v.reserve(SIZE);
	for (size_t i = 0; i < SIZE; i++)
		v[i] = SIZE - i;
	for (size_t i = 0; i < SIZE; i++)
		std::cout	<< v[i]
					<< " ";
	std::cout	<< std::endl;
}
