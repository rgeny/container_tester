/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_types.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:57:19 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:16:33 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>
#include <deque>

template
<
	typename T
>
static void	_test	(T lhs,
					 T rhs)
{
	std::cout	<< "lhs = "
				<< lhs
				<< std::endl;
	rhs = lhs;
	std::cout	<< "rhs = lhs"
				<< std::endl
				<< "rhs = "
				<< rhs
				<< std::endl;
}



int	main	(void)
{
	_print_nl	("value_type (int) : ");
	{
		NAMESPACE::stack<int>::value_type	lhs = 17,
											rhs = 0;
		_test(lhs, rhs);
	}
	_print_nl("");
	_print_nl	("value_type (string) : ");
	{
		NAMESPACE::stack<std::string>::value_type	lhs = "aBcDeFgHiJkLmNoPqRsTuVwXyZ",
													rhs;
		_test(lhs, rhs);
	}
	_print_nl("");
	_print_nl	("container_type (std::vector<int>) : ");
	{
		NAMESPACE::stack<int, std::vector<int> >::container_type	lhs (4, 4),
																rhs;

		std::cout	<< "lhs ="
					<< std::endl;
		rhs = lhs;
		std::cout	<< "rhs = lhs"
					<< std::endl
					<< "rhs ="
					<< std::endl;
	}
	_print_nl("");
	_print_nl	("container_type (std::deque<float>) : ");
	{
		NAMESPACE::stack<float, std::deque<float> >::container_type	lhs (4, 4.3795),
																	rhs;

		std::cout	<< "lhs ="
					<< std::endl;
		std::for_each(lhs.begin(), lhs.end(), _print_val<float>);
		rhs = lhs;
		std::cout	<< "rhs = lhs"
					<< std::endl
					<< "rhs ="
					<< std::endl;
		std::for_each(rhs.begin(), rhs.end(), _print_val<float>);
	}
	_print_nl("");
	_print_nl	("size_type (T = int)");
	{
		NAMESPACE::stack<int>::size_type	tmp;

		tmp = -1;
		std::cout	<< "tmp = -1"
					<< std::endl
					<< tmp
					<< std::endl;
		tmp = ULONG_MAX;
		std::cout	<< "tmp = ULONG_MAX"
					<< std::endl
					<< tmp
					<< std::endl;
		tmp = ULLONG_MAX;
		std::cout	<< "tmp = ULLONG_MAX"
					<< std::endl
					<< tmp
					<< std::endl;
		tmp++;
		std::cout	<< "tmp++"
					<< std::endl
					<< tmp
					<< std::endl;
	}
	_print_nl("");
	_print_nl	("reference (T = int)");
	{
		NAMESPACE::stack<int>	s;

		fill_stack(s, 31, 987, "s");

		NAMESPACE::stack<int>::reference	ref = s.top();
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

	return (0);
}
