/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back_empty.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:23:52 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/02 19:17:12 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class & v)
{
	TRY_CATCH
	(
		_print_val_and_size<T>(v);
		std::cout	<< "v.pop_back()"
					<< std::endl;
		v.pop_back();
		_print_val_and_size<T>(v);
	);
}

int	main	(void)
{
	NAMESPACE::vector<size_t>	v(1);

	_test<size_t>	(v);
	_test<size_t>	(v);
}
