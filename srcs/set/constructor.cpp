/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:11:21 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:17:04 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 7

struct TestSentinel
{
	std::string		_str;

	TestSentinel	(void)
		:_str()
	{
		std::cout	<< "TestSentinel dfl ctor\n";
	}
	TestSentinel	(TestSentinel const & src)
		:_str(src._str)
	{
		std::cout	<< "TestSentinel cpy ctor\n";
	}
	TestSentinel	(std::string const & str)
		:_str(str)
	{
		std::cout	<< "TestSentinel parameter ctor\n";
	}

	TestSentinel &	operator=	(TestSentinel const & rhs)
	{
		_str = rhs._str;
		return (*this);
	}

	bool	operator<	(TestSentinel const & rhs) const
	{	return (_str < rhs._str);	}
};

void	print	(NAMESPACE::set<float>::value_type const & value)
{
	std::cout	<< value
				<< std::endl;
}

int	main	(void)
{
	__attribute__((unused)) NAMESPACE::set<TestSentinel>	m_test_sentinel_constructor;


	std::greater<float>			greater;
	std::less<float>			less;
	std::allocator<int>			allocint;

	NAMESPACE::set<float>												m_dfl;
	NAMESPACE::set<float, std::greater<float> >							m_dfl_greater(greater);
	NAMESPACE::set<float, std::less<float>, std::allocator<int> >		m_dfl_allocint(less, allocint);
	NAMESPACE::set<float, std::greater<float>, std::allocator<int> >	m_dfl_greater_allocint(greater, allocint);
	float						f = 3.14;

	for (int i = 0; i < SIZE; ++i, f = f * f)
	{
		m_dfl.insert(f);
		m_dfl_greater.insert(f);
		m_dfl_allocint.insert(f);
		m_dfl_greater_allocint.insert(f);
	}
	
	NAMESPACE::set<float>												
		m_cpy(m_dfl),
		m_range(m_dfl.begin(), m_dfl.end());
	NAMESPACE::set<float, std::greater<float> >
		m_cpy_greater(m_dfl_greater),
		m_range_greater(m_dfl_greater.begin(), m_dfl_greater.end(), greater);
	NAMESPACE::set<float, std::less<float>, std::allocator<int> >	
		m_cpy_allocint(m_dfl_allocint),
		m_range_allocint(m_dfl_allocint.begin(), m_dfl_allocint.end()),
		m_range_allocdouble(m_dfl_allocint.begin(), m_dfl_allocint.end(), less, std::allocator<double>() );
	NAMESPACE::set<float, std::greater<float>, std::allocator<int> >	
		m_cpy_greater_allocint(m_dfl_greater_allocint),
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
