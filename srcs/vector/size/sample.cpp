/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:19:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/05/17 14:10:46 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	test;

	std::cout	<< "size     : "
				<< test.size()
				<< std::endl
				<< "max_size : "
				<< test.max_size()
				<< std::endl;
	
	return (0);
}
