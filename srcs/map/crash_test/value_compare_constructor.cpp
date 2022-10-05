/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_compare_constructor.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:28:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 13:29:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP::value_compare	cmp((std::less<int>()));
}
