/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_after_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:06:36 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/02 14:12:05 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v(10);

	for (int i = 0; i < 10; i++)
		v[i] = i;

	PRINT_AND_EXECUTE(v.erase(v.begin(), v.end() + 1));
	_print_val_and_size<int>(v);

	return (0);
}
