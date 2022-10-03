/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_constructor_other_compare_function.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 12:21:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 5

int	main	(void)
{
	std::less<int>	less;

	NAMESPACE::map<int, int, std::greater<int> >	m_dfl;

	for (int i = 0; i < SIZE; ++i)
		m_dfl[i] = i;
	NAMESPACE::map<int, int, std::greater<int> >	m_range_less(m_dfl.begin(), m_dfl.end(), less);
}
