/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_inf.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:53:55 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:44:29 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define	SIZE 3

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET				m;

	m.insert(4);
	PRINT_EXECUTE(m.begin() < m.end());
}
