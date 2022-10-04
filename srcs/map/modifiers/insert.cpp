/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:24:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 17:35:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE_VALUE 14
#define SIZE_POS 100000
#define SIZE_RANGE 25

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP								m;
	std::pair<MAP::iterator, bool>	iterator_pair;
	MAP::iterator					it;

	_print_nl("NAMESPACE::pair< iterator, bool > insert(const value_type & value");
	for (int i = 0; i < SIZE_VALUE; ++i)
	{
		MAP::value_type		map_pair(i, -i),
							map_pair2(i, i * i + 1);
		iterator_pair = m.insert(map_pair);
		PRINT_EXECUTE(iterator_pair.first->first);
		PRINT_EXECUTE(iterator_pair.first->second);
		PRINT_EXECUTE(iterator_pair.second);
		iterator_pair = m.insert(map_pair2);
		PRINT_EXECUTE(iterator_pair.first->first);
		PRINT_EXECUTE(iterator_pair.first->second);
		PRINT_EXECUTE(iterator_pair.second);
		_print_nl();
	}

	m.clear();

	_print_nl();
	_print_nl();
	_print_nl("iterator insert(iterator hint, const value_type & value");
	it = m.begin();
	for (int i = 0; i < SIZE_POS; ++i)
	{
		MAP::value_type		map_pair(i, -i);
		it = m.insert(it, map_pair);
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
	}

	_print_nl();
	_print_nl();
	_print_nl("template < typename InputIt > void insert(InputIt first, InputIt last)");

	MAP		m2;

	_InputIterator<MAP>	iit = m.begin(),
						iite = m.begin();
	for (int i = 0; i < SIZE_RANGE / 2; ++i)
		iite++;
	m2.insert(iit, iite);
	print_map(m2);
	m2.insert(_InputIterator<MAP>(m2.begin()), _InputIterator<MAP>(m2.end()));
	print_map(m2);
}
