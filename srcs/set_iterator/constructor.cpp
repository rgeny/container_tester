/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:32:02 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:24:32 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

typedef NAMESPACE::set<int>		SET;
typedef SET::iterator			ITERATOR;
typedef SET::const_iterator		CONST_ITERATOR;

int	main	(void)
{
	SET	m;

	m.insert(3);
	m.insert(4);

	ITERATOR		it_dfl;
	CONST_ITERATOR	cit_dfl;
	ITERATOR		it = m.begin();
	CONST_ITERATOR	cit = m.begin();

	PRINT_EXECUTE((it_dfl == it_dfl));

	PRINT_EXECUTE(*it);
	PRINT_EXECUTE(*cit);

	ITERATOR		it_cpy_it(it);
	CONST_ITERATOR	cit_cpy_it(it),
					cit_cpy_cit(cit);
	
	PRINT_EXECUTE(*it_cpy_it);
	PRINT_EXECUTE(*cit_cpy_it);
	PRINT_EXECUTE(*cit_cpy_cit);
}
