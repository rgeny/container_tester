/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_size.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:22:57 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:18:04 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	NAMESPACE::stack<int, std::vector<int> >	s;

	_print_nl	("try to add 1000 elements in stack");
	fill_stack	(s, 1, 1000);
	empty_the_stack(s);

	_print_nl	("try to add 10000 elements in stack");
	fill_stack	(s, 1, 10000);
	empty_the_stack(s);

	_print_nl	("try to add 100000 elements in stack");
	fill_stack	(s, 1, 100000);
	empty_the_stack(s);

	_print_nl	("try to add 300000 elements in stack");
	fill_stack	(s, 1, 300000);
	empty_the_stack(s);
}
