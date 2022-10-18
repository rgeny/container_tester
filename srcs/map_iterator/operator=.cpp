/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator=.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:46:57 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 18:21:24 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

typedef NAMESPACE::map<int, int>	MAP;
typedef MAP::iterator				ITERATOR;
typedef MAP::const_iterator			CONST_ITERATOR;

int	main	(void)
{
	MAP				m;

	m[31] = 7;

	ITERATOR		it_empty,
					it = m.begin();
	CONST_ITERATOR	cit_empty,
					cit = m.begin();
	
	PRINT_EXECUTE(it_empty == it_empty);
	PRINT_EXECUTE(it_empty == it);
	PRINT_EXECUTE(it_empty == cit_empty);
	PRINT_EXECUTE(it_empty == cit);
	_print_nl();

	PRINT_EXECUTE(it == it_empty);
	PRINT_EXECUTE(it == it);
	PRINT_EXECUTE(it == cit_empty);
	PRINT_EXECUTE(it == cit);
	_print_nl();

	PRINT_EXECUTE(cit_empty == it_empty);
	PRINT_EXECUTE(cit_empty == it);
	PRINT_EXECUTE(cit_empty == cit_empty);
	PRINT_EXECUTE(cit_empty == cit);
	_print_nl();

	PRINT_EXECUTE(cit == it_empty);
	PRINT_EXECUTE(cit == it);
	PRINT_EXECUTE(cit == cit_empty);
	PRINT_EXECUTE(cit == cit);
	_print_nl();

	ITERATOR		it_cpy_it_empty,
					it_cpy_it;
	CONST_ITERATOR	cit_cpy_it_empty,
					cit_cpy_it,
					cit_cpy_cit_empty,
					cit_cpy_cit;
	
	it_cpy_it_empty = it_empty;
	it_cpy_it = it;
	cit_cpy_it_empty = it_empty;
	cit_cpy_it = it;
	cit_cpy_cit_empty = cit_empty;
	cit_cpy_cit = cit;


	PRINT_EXECUTE(it_cpy_it_empty == it_empty);
	PRINT_EXECUTE(it_cpy_it_empty == it);
	PRINT_EXECUTE(it_cpy_it_empty == cit_empty);
	PRINT_EXECUTE(it_cpy_it_empty == cit);
	PRINT_EXECUTE(it_cpy_it_empty == it_cpy_it_empty);
	PRINT_EXECUTE(it_cpy_it_empty == it_cpy_it);
	PRINT_EXECUTE(it_cpy_it_empty == cit_cpy_it_empty);
	PRINT_EXECUTE(it_cpy_it_empty == cit_cpy_it);
	PRINT_EXECUTE(it_cpy_it_empty == cit_cpy_cit_empty);
	PRINT_EXECUTE(it_cpy_it_empty == cit_cpy_cit);
	_print_nl();

	PRINT_EXECUTE(it_cpy_it == it_empty);
	PRINT_EXECUTE(it_cpy_it == it);
	PRINT_EXECUTE(it_cpy_it == cit_empty);
	PRINT_EXECUTE(it_cpy_it == cit);
	PRINT_EXECUTE(it_cpy_it == it_cpy_it_empty);
	PRINT_EXECUTE(it_cpy_it == it_cpy_it);
	PRINT_EXECUTE(it_cpy_it == cit_cpy_it_empty);
	PRINT_EXECUTE(it_cpy_it == cit_cpy_it);
	PRINT_EXECUTE(it_cpy_it == cit_cpy_cit_empty);
	PRINT_EXECUTE(it_cpy_it == cit_cpy_cit);
	_print_nl();

	PRINT_EXECUTE(cit_cpy_it_empty == it_empty);
	PRINT_EXECUTE(cit_cpy_it_empty == it);
	PRINT_EXECUTE(cit_cpy_it_empty == cit_empty);
	PRINT_EXECUTE(cit_cpy_it_empty == cit);
	PRINT_EXECUTE(cit_cpy_it_empty == it_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_it_empty == it_cpy_it);
	PRINT_EXECUTE(cit_cpy_it_empty == cit_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_it_empty == cit_cpy_it);
	PRINT_EXECUTE(cit_cpy_it_empty == cit_cpy_cit_empty);
	PRINT_EXECUTE(cit_cpy_it_empty == cit_cpy_cit);
	_print_nl();

	PRINT_EXECUTE(cit_cpy_it == it_empty);
	PRINT_EXECUTE(cit_cpy_it == it);
	PRINT_EXECUTE(cit_cpy_it == cit_empty);
	PRINT_EXECUTE(cit_cpy_it == cit);
	PRINT_EXECUTE(cit_cpy_it == it_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_it == it_cpy_it);
	PRINT_EXECUTE(cit_cpy_it == cit_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_it == cit_cpy_it);
	PRINT_EXECUTE(cit_cpy_it == cit_cpy_cit_empty);
	PRINT_EXECUTE(cit_cpy_it == cit_cpy_cit);
	_print_nl();

	PRINT_EXECUTE(cit_cpy_cit_empty == it_empty);
	PRINT_EXECUTE(cit_cpy_cit_empty == it);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit_empty);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit);
	PRINT_EXECUTE(cit_cpy_cit_empty == it_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_cit_empty == it_cpy_it);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit_cpy_it);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit_cpy_cit_empty);
	PRINT_EXECUTE(cit_cpy_cit_empty == cit_cpy_cit);
	_print_nl();

	PRINT_EXECUTE(cit_cpy_cit == it_empty);
	PRINT_EXECUTE(cit_cpy_cit == it);
	PRINT_EXECUTE(cit_cpy_cit == cit_empty);
	PRINT_EXECUTE(cit_cpy_cit == cit);
	PRINT_EXECUTE(cit_cpy_cit == it_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_cit == it_cpy_it);
	PRINT_EXECUTE(cit_cpy_cit == cit_cpy_it_empty);
	PRINT_EXECUTE(cit_cpy_cit == cit_cpy_it);
	PRINT_EXECUTE(cit_cpy_cit == cit_cpy_cit_empty);
	PRINT_EXECUTE(cit_cpy_cit == cit_cpy_cit);
	_print_nl();
}
