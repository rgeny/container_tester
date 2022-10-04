/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve_max_size.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:42:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/31 15:29:16 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	try
	{
		_print_nl	("reserve(v.max_size())");
		v.reserve(v.max_size());
		_print_val_and_size<int>(v);
	}
	catch (std::exception const & err)
	{
		std::cout	<< "error"
					<< std::endl;
	}
}
