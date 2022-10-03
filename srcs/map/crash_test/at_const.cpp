/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at_const.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:03:43 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 14:07:45 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 1

struct Test
	:public NAMESPACE::map<int, int>
{
	void	test	(int i) const
	{
		NAMESPACE::map<int, int>::mapped_type &	mapped = this->at(i);

		PRINT_EXECUTE(mapped);
	}
};

int	main	(void)
{
	__attribute__((unused)) Test	a;
}
