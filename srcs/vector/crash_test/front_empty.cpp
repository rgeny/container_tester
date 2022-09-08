/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front_empty.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:00:32 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/03 12:02:55 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	int				val			= v.front();
	int &			ref			= v.front();
	int const		const_val	= v.front();
	int const &		const_ref	= v.front();

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
}
