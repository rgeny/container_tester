/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:08:49 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/31 14:52:15 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

int	main	(void)
{
	_print_nl	("clear empty vector<int> :");
	{
		NAMESPACE::vector<int>	v;

		v.clear();

		_print_val_and_size<int> (v);
	}
	_print_nl	("clear vector<int> :");
	{
		NAMESPACE::vector<int>	v(10000, 17);

		v.clear();

		_print_val_and_size<int> (v);
	}
}
