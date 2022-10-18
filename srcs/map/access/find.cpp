/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:59:58 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 12:19:46 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 13

typedef NAMESPACE::map<int, int>	MAP;

int	main	(void)
{
	MAP						m;
	MAP::iterator			it;
	MAP::const_iterator		cit;

	for (int i = 0; i < SIZE; ++i)
		m[i] = 1 + i * i;
	
	for (int i = -1; i < SIZE; ++i)
	{
		int	const	tmp = i;

		it = m.find(tmp);
		cit = m.find(tmp);

//#ifdef FT
//		PRINT_EXECUTE(m.end()._cur_node);
//		PRINT_EXECUTE(&m._rbtree._head);
//		PRINT_EXECUTE(&m._rbtree._size);
//		PRINT_EXECUTE(it._cur_node);
//		PRINT_EXECUTE(&it->first);
//#endif
		PRINT_EXECUTE(it->first);
		PRINT_EXECUTE(it->second);
		PRINT_EXECUTE(cit->first);
		PRINT_EXECUTE(cit->second);
		_print_nl();
	}
}
