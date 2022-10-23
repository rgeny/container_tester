/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_supeq.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:53:55 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:45:25 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define	SIZE 3

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET				m;

	m.insert(2);
	PRINT_EXECUTE(m.begin() >= m.end());
}
