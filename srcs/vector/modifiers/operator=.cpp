/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator=.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:44:57 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/02 19:51:58 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class v,
					 Class v2)
{
	TRY_CATCH
	(
		_print_nl	("v = v2;");
		v = v2;
		std::cout	<< "v data :"
					<< std::endl;
		_print_val_and_size<T>(v);
		std::cout	<< "v2 data :"
					<< std::endl;
		_print_val_and_size<T>(v2);
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>	v(13, 1),
							v2(14, 3),
							v3;

	_test<int>(v, v);
	_test<int>(v, v2);
	_test<int>(v, v3);
	_test<int>(v2, v2);
	_test<int>(v2, v3);
	_test<int>(v3, v3);
}
