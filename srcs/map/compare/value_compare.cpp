/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_compare.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:10:06 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:07:37 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<std::string, int>	MAP;

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
		this->comp(lhs.first, rhs.first);
		return (this->comp(lhs.first, rhs.first) &&
				this->cmp::operator()(lhs, rhs));
	}
};

template < typename Container >
void	Test<Container>::const_test	(void) const
{
	value_compare	cmp((MAP::key_compare()));

	PRINT_EXECUTE(cmp(*this->begin(), *this->begin()));
	PRINT_EXECUTE(cmp(*(++this->begin()), *this->begin()));
	PRINT_EXECUTE(cmp(*this->begin(), *(++this->begin())));
}

int	main	(void)
{
	Test<MAP>	m;

	m["abc"] = 37;
	m["def"] = 3;
	m.const_test();
}
