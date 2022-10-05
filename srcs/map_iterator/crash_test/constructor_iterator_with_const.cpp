/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor_iterator_with_const.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:43:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 17:44:36 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP				m;

	m[1] = 4;
	MAP::const_iterator	cit = m.begin();
	MAP::iterator		it(cit);
}
