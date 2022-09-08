/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:03:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include "test_string.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class & v,
					 T value)
{
	TRY_CATCH
	(
		std::cout	<< std::string("v.push_back( ") +
					   test::to_string(value) +
					   ");";
		v.push_back(value);
		_print_val_and_size<T>	(v);
	);
}

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	for (size_t i = 0; i < 15; i++)
		_test(v, i * v.size());
}
