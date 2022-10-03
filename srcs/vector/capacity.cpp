/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:19:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 14:48:06 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 10

int	main	(void)
{
	NAMESPACE::vector<int>	test;

	PRINT_EXECUTE(test.size());
	PRINT_EXECUTE(test.max_size());
	PRINT_EXECUTE(test.capacity());
	PRINT_EXECUTE(test.empty());
	
	for (int i = 0; i < SIZE; ++i)
		test.push_back(i);
	PRINT_EXECUTE(test.size());
	PRINT_EXECUTE(test.max_size());
	PRINT_EXECUTE(test.capacity());
	PRINT_EXECUTE(test.empty());

	for (int i = 0; i < SIZE; ++i)
		test.erase(test.begin());
	PRINT_EXECUTE(test.size());
	PRINT_EXECUTE(test.max_size());
	PRINT_EXECUTE(test.capacity());
	PRINT_EXECUTE(test.empty());

	return (0);
}
