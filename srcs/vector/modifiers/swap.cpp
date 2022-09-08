/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:21:10 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/03 15:08:38 by rgeny            ###   ########.fr       */
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
		_print_nl("");
		_print_nl	(std::string("v.swap(v2)"));
		v.swap(v2);
		std::cout	<< "data v : "
					<< std::endl;
		_print_val_and_size<T>	(v);
		std::cout	<< "data v2 : "
					<< std::endl;
		_print_val_and_size<T>	(v2);
		NAMESPACE::swap(v, v2);
		std::cout	<< "data v : "
					<< std::endl;
		_print_val_and_size<T>	(v);
		std::cout	<< "data v2 : "
					<< std::endl;
		_print_val_and_size<T>	(v2);
	);
}

int	main	(void)
{
	NAMESPACE::vector<unsigned long>	v(10, 7),
										v2(7, -9),
										v3;
	
	_test<unsigned long>	(v, v);
	_test<unsigned long>	(v, v2);
	_test<unsigned long>	(v, v3);
	_test<unsigned long>	(v2, v2);
	_test<unsigned long>	(v2, v3);
	_test<unsigned long>	(v3, v3);
}
