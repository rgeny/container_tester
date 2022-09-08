/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_empty.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:07:08 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:18:43 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	NAMESPACE::stack<int, std::vector<int> >	s;

	_print_nl	("test pop with empty stack");
	{
		s.pop();
	}
}
