/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_after_end.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:39:28 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/05 14:40:00 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v(11);

	PRINT_EXECUTE(*(v.end() + 1));
}
