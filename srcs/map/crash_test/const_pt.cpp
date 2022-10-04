/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_pt.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:52:41 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/01 18:55:17 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int	main	(void)
{
	NAMESPACE::map<int, int>::value_type	value_type(98, 89);
	NAMESPACE::map<int, int>::const_pointer	const_pointer = &value_type;

	PRINT_EXECUTE((const_pointer->second = 3));
}
