/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator=.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:29:42 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:34:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 191

void	print	(int const & value)
{
	std::cout	<< value
				<< std::endl;
}

int	main	(void)
{
	NAMESPACE::set<int>	m;

	for (int i = 0; i < SIZE; ++i)
		m.insert(i * i);
	
	NAMESPACE::set<int>	m_cpy1;
	NAMESPACE::set<int> &	m_cpy2 = m_cpy1 = m;

	std::for_each(m.begin(), m.end(), print);
	_print_nl();
	std::for_each(m_cpy1.begin(), m_cpy1.end(), print);
	_print_nl();
	std::for_each(m_cpy2.begin(), m_cpy2.end(), print);

	PRINT_EXECUTE( ( &m_cpy1 == &m_cpy2) );
}
