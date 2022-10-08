/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_sup.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:53:55 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 13:56:07 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define	SIZE 3

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP				m;

	m[4] = 2;
	PRINT_EXECUTE(m.begin() > m.end());
}
