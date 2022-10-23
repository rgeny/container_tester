/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator=.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:56:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 17:58:17 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP					m;

	m[4212] = 2124;

	MAP::const_iterator		cit = m.begin();
	MAP::iterator			it;

	it = cit;
}
