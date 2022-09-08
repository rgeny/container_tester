/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relationnal_operator.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:10:53 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/27 12:25:20 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	NAMESPACE::stack<int>	s1,
							s2;
	std::cout	<< std::boolalpha;
	_print_nl	("test with empty stacks");
	PRINT_EXECUTE(s1 == s2);
	PRINT_EXECUTE(s1 != s2);
	PRINT_EXECUTE(s1 < s2);
	PRINT_EXECUTE(s1 <= s2);
	PRINT_EXECUTE(s1 > s2);
	PRINT_EXECUTE(s1 >= s2);

	fill_stack(s1, 17, 98);
	_print_nl	("");
	_print_nl	("test with fill s1 and empty s2");
	PRINT_EXECUTE(s1 == s2);
	PRINT_EXECUTE(s1 != s2);
	PRINT_EXECUTE(s1 < s2);
	PRINT_EXECUTE(s1 <= s2);
	PRINT_EXECUTE(s1 > s2);
	PRINT_EXECUTE(s1 >= s2);
	
	fill_stack(s2, -98, -17);
	_print_nl	("");
	_print_nl	("test with different content");
	PRINT_EXECUTE(s1 == s2);
	PRINT_EXECUTE(s1 != s2);
	PRINT_EXECUTE(s1 < s2);
	PRINT_EXECUTE(s1 <= s2);
	PRINT_EXECUTE(s1 > s2);
	PRINT_EXECUTE(s1 >= s2);
	
	s2 = s1;
	_print_nl	("");
	_print_nl	("test with same content");
	PRINT_EXECUTE(s1 == s2);
	PRINT_EXECUTE(s1 != s2);
	PRINT_EXECUTE(s1 < s2);
	PRINT_EXECUTE(s1 <= s2);
	PRINT_EXECUTE(s1 > s2);
	PRINT_EXECUTE(s1 >= s2);
}
