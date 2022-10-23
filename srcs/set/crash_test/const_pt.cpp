/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_pt.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:52:41 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:18:40 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int	main	(void)
{
	NAMESPACE::set<int>::value_type		value_type(98);
	NAMESPACE::set<int>::const_pointer	const_pointer = &value_type;

	PRINT_EXECUTE((*const_pointer = 3));
}
