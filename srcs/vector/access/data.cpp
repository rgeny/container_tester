/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Credataed: 2022/09/01 15:27:58 by rgeny             #+#    #+#             */
/*   Upddataed: 2022/09/03 11:55:48 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class v)
{
	TRY_CATCH
	(
		_print_nl	(std::string("v.data()"));
		T *			pt = v.data();
		T const *	const_pt = v.data();

		std::cout	<< std::boolalpha
					<< "pt == const_pt ? "
					<< (pt == const_pt)
					<< std::endl;
	)
}

int	main	(void)
{
	NAMESPACE::vector<size_t>	v,
								v1(10);
	
	_test<size_t>	(v);
	std::cout	<< "v.data() == "
				<< v.data()
				<< std::endl;
	_test<size_t>	(v1);
}
