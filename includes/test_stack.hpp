/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:05:13 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 20:26:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STACK_HPP
# define TEST_STACK_HPP

# include "test_Utils.hpp"

# ifdef FT
#  include "stack.hpp"
# else
#  include <stack>
# endif

template
<
	typename T,
	class Container
>
void	print_stack_size	(NAMESPACE::stack<T, Container> const & stack,
							 std::string name = "")
{
	if (name.empty())
		PRINT_EXECUTE(stack.size());
	else
		std::cout	<< name
					<< stack.size()
					<< std::endl;
}

template
<
	typename T,
	class Container
>
void	fill_stack	(NAMESPACE::stack<T, Container> & stack,
					 T start,
					 T end,
					 std::string name = "")
{
	while (start <= end)
	{
		stack.push(start);
		++start;
	}
	print_stack_size(stack, name);
}

template
<
	typename T,
	class Container
>
void	empty_the_stack	(NAMESPACE::stack<T, Container> & stack,
						 std::string name = "")
{
	_print_nl("empty the stack");
	while ( ! stack.empty() )
	{
		std::cout	<< stack.top()
					<< " ";
		stack.pop();
	}
	print_stack_size(stack, name);
}

#endif

