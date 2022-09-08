/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:19:34 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/02 18:23:14 by rgeny            ###   ########.fr       */
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
		std::cout	<< "v.pop_back()"
					<< std::endl;
		v.pop_back();
		_print_val_and_size<T>(v);
	);
}

int	main	(void)
{
	NAMESPACE::vector<int>	v(10);

	for (size_t i = 0; i < 10; i++)
		_test<int> (v);
}
