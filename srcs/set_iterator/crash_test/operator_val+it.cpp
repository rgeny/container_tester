/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_val+it.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:51:23 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:48:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET				m;
	__attribute__((unused)) SET::iterator	it = 3 + m.begin();
}
