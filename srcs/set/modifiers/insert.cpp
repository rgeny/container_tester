/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:24:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:42:07 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE_VALUE 17
#define SIZE_POS 100000
#define SIZE_RANGE 25

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET										m;
	NAMESPACE::pair<SET::iterator, bool>	iterator_pair;
	SET::iterator							it;

	_print_nl("NAMESPACE::pair< iterator, bool > insert(const value_type & value");
	for (int i = 0; i < SIZE_VALUE; ++i)
	{
		SET::value_type		set_value(i),
							set_value2(i * i + 1);
		iterator_pair = m.insert(set_value);
		PRINT_EXECUTE(*iterator_pair.first);
		PRINT_EXECUTE(*iterator_pair.first);
		PRINT_EXECUTE(iterator_pair.second);
		iterator_pair = m.insert(set_value2);
		PRINT_EXECUTE(*iterator_pair.first);
		PRINT_EXECUTE(*iterator_pair.first);
		PRINT_EXECUTE(iterator_pair.second);
		_print_nl();
		print_set(m);
	}

	m.clear();

	_print_nl();
	_print_nl();
	_print_nl("iterator insert(iterator hint, const value_type & value");
	it = m.begin();
	for (int i = SIZE_POS; i > SIZE_POS / 2; --i)
	{
		SET::value_type		set_value(-i),
							set_value2(i + 1);
		it = m.insert(it, set_value);
		PRINT_EXECUTE(*it);
		it = m.insert(it, set_value2);
		PRINT_EXECUTE(*it);
	}

	for (int i = SIZE_POS / 2; i > 0; --i)
	{
		SET::value_type		set_value(-i),
							set_value2(i + 1);
		it = m.end();
		it = m.insert(it, set_value);
		PRINT_EXECUTE(*it);
		it = m.end();
		it = m.insert(it, set_value2);
		PRINT_EXECUTE(*it);
	}
	print_set(m);

	_print_nl();
	_print_nl();
	_print_nl("template < typename InputIt > void insert(InputIt first, InputIt last)");

	SET		m2;

	_InputIterator<SET>	iit = m.begin(),
						iite = m.begin();
	for (int i = 0; i < SIZE_RANGE / 2; ++i)
		iite++;
	m2.insert(iit, iite);
	print_set(m2);
	m2.insert(_InputIterator<SET>(m2.begin()), _InputIterator<SET>(m2.end()));
	print_set(m2);
}
