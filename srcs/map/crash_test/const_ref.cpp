/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_ref.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:33:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/01 18:52:35 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int	main	(void)
{
	NAMESPACE::map<int, int>::value_type		value_type(168, 942);
	NAMESPACE::map<int, int>::const_reference	const_reference = value_type;

	PRINT_EXECUTE((const_reference.second = 17));
}
