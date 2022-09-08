/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crash_top.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:04:34 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:17:40 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	NAMESPACE::stack<int, std::vector<int> >	s;

	_print_nl	("test top with empty stack");
	{
		std::cout	<< "top = "
					<< s.top()
					<< std::endl;
	}	

	return (0);
}
