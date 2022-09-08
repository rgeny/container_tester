/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:14:20 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:10 by rgeny            ###   ########.fr       */
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
		_print_nl	("resize(" + test::to_string(n) + ")");
		v.resize(n);
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
	_test<int>	(v, 2);
	_test<int>	(v, 3);
	_test<int>	(v, 98);
	_test<int>	(v, 0);
	_test<int>	(v, 175172);
	_test<int>	(v, v.size());
	_test<int>	(v, v.size() / 2 - 1);
	_test<int>	(v, v.size() * 2 - 1);
	_test<int>	(v, v.max_size() + 1);
}
