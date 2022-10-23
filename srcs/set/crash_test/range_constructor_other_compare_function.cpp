/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_constructor_other_compare_function.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:21:06 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 5

int	main	(void)
{
	std::less<int>	less;

	NAMESPACE::set<int, std::greater<int> >	m_dfl;

	for (int i = 0; i < SIZE; ++i)
		m_dfl.insert(i);
	NAMESPACE::set<int, std::greater<int> >	m_range_less(m_dfl.begin(), m_dfl.end(), less);
}
