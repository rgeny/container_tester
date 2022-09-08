/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator[].cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:46 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include "test_string.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class v,
					 size_t pos)
{
	TRY_CATCH
	(
		_print_nl	("std::cout	<< v[" +
					 test::to_string(pos) +
					 "] << std::endl;");
		T			val 		= v[pos];
		T &			ref 		= v[pos];
		T const 	const_val	= v[pos];
		T const &	const_ref	= v[pos];
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
	NAMESPACE::vector<short>	v;

	for (short i = 0; i < 10; i++)
		v.push_back(i * i * i);
	for (size_t i = 0; i < 10; i++)
		_test<short>	(v, i);
}
