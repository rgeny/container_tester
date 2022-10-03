/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor_other_compare_function.cpp             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 12:17:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	std::greater<int>	greater;

	NAMESPACE::map<int, int>	m_dfl,
								m_cpy_greater(m_dfl, greater);
}
