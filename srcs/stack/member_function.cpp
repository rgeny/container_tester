/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_function.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:47:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:19:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	NAMESPACE::stack<int, std::vector<int> >	s;

	_print_nl	("size with empty stack");
	std::cout	<< s.size()
				<< std::endl;
	std::cout	<< "stack is empty ? "
				<< std::boolalpha
				<< s.empty()
				<< std::endl;
	
	_print_nl	("fill stack with one element");
	fill_stack(s, 17, 17);
	empty_the_stack(s);

	_print_nl	("file stack with 31 elements");
	fill_stack(s, 31, 61);
	empty_the_stack(s);

	_print_nl	("file stack with 314 elements");
	fill_stack(s, 31, 344);
	empty_the_stack(s);
}
