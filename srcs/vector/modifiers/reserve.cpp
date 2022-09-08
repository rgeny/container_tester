/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:27:31 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:56:57 by rgeny            ###   ########.fr       */
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
					 size_t n)
{
	try
	{
		_print_nl	("reserve(" + test::to_string(n) + ")");
		v.reserve(n);
		_print_val_and_size<T>(v);
	}
	catch (std::exception const & err)
	{
		std::cout	<< "error"
					<< std::endl;
	}
}

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	_test<int>	(v, 0);
	_test<int>	(v, 1);
	_test<int>	(v, 17);
	_test<int>	(v, 0);
	_test<int>	(v, 718425);
	_test<int>	(v, v.capacity());
	_test<int>	(v, v.capacity() / 2);
	_test<int>	(v, v.max_size() + 1);
}
