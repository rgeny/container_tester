/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_compare_member.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:09 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/05 13:35:29 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;

struct value_compare
	:public MAP::value_compare
{
	typedef MAP::value_compare			cmp;
	typedef cmp::result_type			result_type;
	typedef cmp::first_argument_type	first_argument_type;
	typedef cmp::second_argument_type	second_argument_type;
	typedef MAP::value_type				value_type;
	typedef MAP::key_compare			Compare;

	value_compare	(Compare c)
		:cmp(c)
	{	}

	result_type	operator()	(value_type const & lhs,
							 value_type const & rhs)
	{
		return (this->cmp::operator()(lhs, rhs));
	}
};

int	main	(void)
{
	value_compare	cmp((MAP::key_compare()));

	PRINT_EXECUTE(cmp.comp(1, 2));
}
