/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_operator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:26:29 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 13:35:54 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 19

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP				m;
	for (int i = 0; i < SIZE; ++i)
		m[i] = i;

	MAP::iterator	it = m.begin(),
					ite= m.end();

	for (int i = 0; i < SIZE * 2; ++i, ++it)
	{
		PRINT_EXECUTE(i);
		PRINT_EXECUTE(it == ite);
		PRINT_EXECUTE(it != ite);
		_print_nl();
	}
}
