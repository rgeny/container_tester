/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_ref.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:33:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:18:35 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int	main	(void)
{
	NAMESPACE::set<int>::value_type			value_type(168);
	NAMESPACE::set<int>::const_reference	const_reference = value_type;

	PRINT_EXECUTE((const_reference = 17));
}
