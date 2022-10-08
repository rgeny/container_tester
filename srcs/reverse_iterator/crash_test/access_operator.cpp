/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:04:39 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:27:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP		m;

	m[1] = 2147483647;
	m[2] = -2147483648;

	MAP::iterator	it = m.begin();

	std::cout	<< it[1]
				<< std::endl;
}
