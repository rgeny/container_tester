/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_end.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:17:31 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/05 17:17:57 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v(7);

	PRINT_EXECUTE(v[7]);
}
