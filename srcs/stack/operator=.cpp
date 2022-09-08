/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator=.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:24:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 16:14:22 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	_print_nl	("test operator= with empty stack (T == char)");
	{
		NAMESPACE::stack<char>	s1, s2;

		PRINT_EXECUTE(s1.size());
		PRINT_EXECUTE(s2.size());
		EXECUTE_AND_PRINT(s2 = s1);
		PRINT_EXECUTE(s1.size());
		PRINT_EXECUTE(s2.size());
	}
	_print_nl	("test operator= with filled stack with 10 elements (T == char)");
	{
		NAMESPACE::stack<char>	s1, s2;

		fill_stack(s1, 'a', 'j');
		PRINT_EXECUTE(s2.size());
		EXECUTE_AND_PRINT(s2 = s1);
		PRINT_EXECUTE(s1.size());
		PRINT_EXECUTE(s2.size());
	}
	_print_nl	("test operator= with stack filled with 100000 elements (T == long)");
	{
		NAMESPACE::stack<long, std::vector<long> >	s1, s2;

		fill_stack<long>(s1, 17, 1016, "s2");
		PRINT_EXECUTE(s2.size());
		EXECUTE_AND_PRINT(s2 = s1);
		PRINT_EXECUTE(s1.size());
		empty_the_stack(s2, "s2");
	}
}
