/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_before_begin.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:03:31 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/02 14:15:10 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v(10);

	for (int i = 0; i < 10; i++)
		v[i] = i;
	
	PRINT_AND_EXECUTE(v.erase(v.begin() - 1));
	_print_val_and_size<int>(v);

	return (0);
}
