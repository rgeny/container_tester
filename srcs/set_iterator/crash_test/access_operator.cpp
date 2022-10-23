/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:48:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:40:09 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET		m;

	m.insert(2);

	PRINT_EXECUTE(*m.begin() = 17);
}
