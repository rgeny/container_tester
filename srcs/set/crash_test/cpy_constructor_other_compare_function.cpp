/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_constructor_other_compare_function.cp          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:17:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int	main	(void)
{
	std::greater<int>	greater;

	NAMESPACE::set<int>	m_dfl,
						m_cpy_greater(m_dfl, greater);
}
