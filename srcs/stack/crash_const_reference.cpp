/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crash_test_const_reference.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:43:03 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/27 13:43:17 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	_print_nl	("const_reference (T = int)");
	{
		NAMESPACE::stack<int>	s;

		fill_stack(s, 31, 987, "s");

		NAMESPACE::stack<int>::const_reference	ref = s.top();
		_print_nl("ref = s.top()");
		PRINT_EXECUTE(s.top());
		PRINT_EXECUTE(ref);
		_print_nl("s.top() = 42");
		s.top() = 42;
		PRINT_EXECUTE(s.top());
		PRINT_EXECUTE(ref);
		_print_nl("ref = 21");
		ref = 21;
		PRINT_EXECUTE(s.top());
		PRINT_EXECUTE(ref);

	}
}
