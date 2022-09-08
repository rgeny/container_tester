/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:56:09 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/03 12:04:25 by rgeny            ###   ########.fr       */
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
		_print_nl("v.front()");
		T			val			= v.front();
		T &			ref			= v.front();
		T const		const_val	= v.front();
		T const &	const_ref	= v.front();

		std::cout	<< "val = "
					<< val
					<< std::endl
					<< "ref = "
					<< ref
					<< std::endl
					<< "const_val = "
					<< const_val
					<< std::endl
					<< "const_ref = "
					<< const_ref
					<< std::endl
					<< "&ref == &const_ref ? "
					<< std::boolalpha
					<< (&ref == &const_ref)
					<< std::endl;
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>	v1(10),
							v2(3, 7);
	_test<int>(v1);
	_test<int>(v2);
}
