/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:27:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:57:41 by rgeny            ###   ########.fr       */
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
					 size_t n)
{
	TRY_CATCH
	(
		_print_nl	(std::string("v.at(") +
					 test::to_string(n) +
					 ");");
		T 	val = v.at(n);
		T &	ref = v.at(n);
		T const const_val = v.at(n);
		T const & const_ref = v.at(n);

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
	);
}

int	main	(void)
{
	NAMESPACE::vector<std::string>	v;
	std::string	str("abc");

	for (int i = 0; i < 24; i++)
	{
		v.push_back(str);
		str[0]++;
		str[1]++;
		str[2]++;
	}

	for (size_t i = 0; i <= v.size(); i++)
		_test<std::string>(v, i);
}
