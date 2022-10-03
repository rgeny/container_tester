/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:19:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 14:44:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 10

int	main	(void)
{
	NAMESPACE::vector<int>	test;

	std::cout	<< "size     : "
				<< test.size()
				<< std::endl
				<< "max_size : "
				<< test.max_size()
				<< std::endl
				<< "capacity : "
				<< test.capacity()
				<< std::endl;
	
	for (int i = 0; i < SIZE; ++i)
		test.push_back(i);
	std::cout	<< "size     : "
				<< test.size()
				<< std::endl
				<< "max_size : "
				<< test.max_size()
				<< std::endl
				<< "capacity : "
				<< test.capacity()
				<< std::endl;

	for (int i = 0; i < SIZE; ++i)
		test.erase(test.begin());
	std::cout	<< "size     : "
				<< test.size()
				<< std::endl
				<< "max_size : "
				<< test.max_size()
				<< std::endl
				<< "capacity : "
				<< test.capacity()
				<< std::endl;
	return (0);
}
