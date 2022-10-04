/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:11:21 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/03 12:17:16 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 7

void	print	(std::pair<float, int> const & p)
{
	std::cout	<< "("
				<< p.first
				<< ":"
				<< p.second
				<< ")"
				<< std::endl;
}

int	main	(void)
{
	std::greater<float>			greater;
	std::less<float>			less;
	std::allocator<int>			allocint;

	NAMESPACE::map<float, int>												m_dfl;
	NAMESPACE::map<float, int, std::greater<float> >						m_dfl_greater(greater);
	NAMESPACE::map<float, int, std::less<float>, std::allocator<int> >		m_dfl_allocint(less, allocint);
	NAMESPACE::map<float, int, std::greater<float>, std::allocator<int> >	m_dfl_greater_allocint(greater, allocint);
	float						f = 3.14;

	for (int i = 0; i < SIZE; ++i, f = f * f)
	{
		int	val = (i - 1) * i;
		m_dfl[f] = val;
		m_dfl_greater[f] = val;
		m_dfl_allocint[f] = val;
		m_dfl_greater_allocint[f] = val;
	}
	
	NAMESPACE::map<float, int>												m_cpy(m_dfl),
																			m_range(m_dfl.begin(), m_dfl.end());
//																			m_range(m_dfl.begin(), m_dfl.end(), greater); //crash_test
	NAMESPACE::map<float, int, std::greater<float> >						m_cpy_greater(m_dfl_greater),
																			m_range_greater(m_dfl_greater.begin(), m_dfl_greater.end(), greater);
//																			m_range_greater(m_dfl_greater.begin(), m_dfl_greater.end(), less); //crash_test
	NAMESPACE::map<float, int, std::less<float>, std::allocator<int> >		m_cpy_allocint(m_dfl_allocint),
																			m_range_allocint(m_dfl_allocint.begin(), m_dfl_allocint.end()),
																			m_range_allocdouble(m_dfl_allocint.begin(), m_dfl_allocint.end(), less, std::allocator<double>() );
	NAMESPACE::map<float, int, std::greater<float>, std::allocator<int> >	m_cpy_greater_allocint(m_dfl_greater_allocint),
																			m_range_greater_allocint(m_dfl_greater_allocint.begin(), m_dfl_greater_allocint.end()),
																			m_range_greater_allocdouble(m_dfl_greater_allocint.begin(), m_dfl_greater_allocint.end(), greater, std::allocator<double>() );



	std::for_each(m_dfl.begin(), m_dfl.end(), print);
	_print_nl();
	std::for_each(m_dfl_greater.begin(), m_dfl_greater.end(), print);
	_print_nl();
	std::for_each(m_dfl_allocint.begin(), m_dfl_allocint.end(), print);
	_print_nl();
	std::for_each(m_dfl_greater_allocint.begin(), m_dfl_greater_allocint.end(), print);
	_print_nl();
	std::for_each(m_cpy.begin(), m_cpy.end(), print);
	_print_nl();
	std::for_each(m_cpy_greater.begin(), m_cpy_greater.end(), print);
	_print_nl();
	std::for_each(m_cpy_allocint.begin(), m_cpy_allocint.end(), print);
	_print_nl();
	std::for_each(m_cpy_greater_allocint.begin(), m_cpy_greater_allocint.end(), print);
	_print_nl();
	std::for_each(m_range.begin(), m_range.end(), print);
	_print_nl();
	std::for_each(m_range_greater.begin(), m_range_greater.end(), print);
	_print_nl();
	std::for_each(m_range_allocint.begin(), m_range_allocint.end(), print);
	_print_nl();
	std::for_each(m_range_allocdouble.begin(), m_range_allocdouble.end(), print);
	_print_nl();
	std::for_each(m_range_greater_allocint.begin(), m_range_greater_allocint.end(), print);
	_print_nl();
	std::for_each(m_range_greater_allocdouble.begin(), m_range_greater_allocdouble.end(), print);
	_print_nl();
}
