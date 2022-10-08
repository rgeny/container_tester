/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structor.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:27:44 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 16:01:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

#define SIZE 17

typedef NAMESPACE::vector<int>		VECTOR;
typedef NAMESPACE::map<int, int>	MAP;

template
<
	typename RIterator,
	typename ConstRIterator
>
static void	_test	(RIterator rit,
					 ConstRIterator crit)
{
	RIterator	dfl_rit,
				par_rit(rit.base()),
				cpy_rit(rit);
	ConstRIterator	dfl_crit,
					par_crit(crit.base()),
					cpy_crit(crit);
	TRY_CATCH
	(
		PRINT_EXECUTE(rit == rit);
		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE(rit == dfl_rit);
		PRINT_EXECUTE(rit == dfl_crit);
		PRINT_EXECUTE(rit == par_rit);
		PRINT_EXECUTE(rit == par_crit);
		PRINT_EXECUTE(rit == cpy_rit);
		PRINT_EXECUTE(rit == cpy_crit);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE(crit == crit);
		PRINT_EXECUTE(crit == dfl_rit);
		PRINT_EXECUTE(crit == dfl_crit);
		PRINT_EXECUTE(crit == par_rit);
		PRINT_EXECUTE(crit == par_crit);
		PRINT_EXECUTE(crit == cpy_rit);
		PRINT_EXECUTE(crit == cpy_crit);

		PRINT_EXECUTE(dfl_rit == rit);
		PRINT_EXECUTE(dfl_rit == crit);
		PRINT_EXECUTE(dfl_rit == dfl_rit);
		PRINT_EXECUTE(dfl_rit == dfl_crit);
		PRINT_EXECUTE(dfl_rit == par_rit);
		PRINT_EXECUTE(dfl_rit == par_crit);
		PRINT_EXECUTE(dfl_rit == cpy_rit);
		PRINT_EXECUTE(dfl_rit == cpy_crit);

		PRINT_EXECUTE(dfl_crit == rit);
		PRINT_EXECUTE(dfl_crit == crit);
		PRINT_EXECUTE(dfl_crit == dfl_rit);
		PRINT_EXECUTE(dfl_crit == dfl_crit);
		PRINT_EXECUTE(dfl_crit == par_rit);
		PRINT_EXECUTE(dfl_crit == par_crit);
		PRINT_EXECUTE(dfl_crit == cpy_rit);
		PRINT_EXECUTE(dfl_crit == cpy_crit);

		PRINT_EXECUTE(par_rit == rit);
		PRINT_EXECUTE(par_rit == crit);
		PRINT_EXECUTE(par_rit == dfl_rit);
		PRINT_EXECUTE(par_rit == dfl_crit);
		PRINT_EXECUTE(par_rit == par_rit);
		PRINT_EXECUTE(par_rit == par_crit);
		PRINT_EXECUTE(par_rit == cpy_rit);
		PRINT_EXECUTE(par_rit == cpy_crit);

		PRINT_EXECUTE(par_rit == rit);
		PRINT_EXECUTE(par_rit == crit);
		PRINT_EXECUTE(par_rit == dfl_rit);
		PRINT_EXECUTE(par_rit == dfl_crit);
		PRINT_EXECUTE(par_rit == par_rit);
		PRINT_EXECUTE(par_rit == par_crit);
		PRINT_EXECUTE(par_rit == cpy_rit);
		PRINT_EXECUTE(par_rit == cpy_crit);

		PRINT_EXECUTE(par_crit == rit);
		PRINT_EXECUTE(par_crit == crit);
		PRINT_EXECUTE(par_crit == dfl_rit);
		PRINT_EXECUTE(par_crit == dfl_crit);
		PRINT_EXECUTE(par_crit == par_rit);
		PRINT_EXECUTE(par_crit == par_crit);
		PRINT_EXECUTE(par_crit == cpy_rit);
		PRINT_EXECUTE(par_crit == cpy_crit);

		PRINT_EXECUTE(cpy_rit == rit);
		PRINT_EXECUTE(cpy_rit == crit);
		PRINT_EXECUTE(cpy_rit == dfl_rit);
		PRINT_EXECUTE(cpy_rit == dfl_crit);
		PRINT_EXECUTE(cpy_rit == par_rit);
		PRINT_EXECUTE(cpy_rit == par_crit);
		PRINT_EXECUTE(cpy_rit == cpy_rit);
		PRINT_EXECUTE(cpy_rit == cpy_crit);

		PRINT_EXECUTE(cpy_crit == rit);
		PRINT_EXECUTE(cpy_crit == crit);
		PRINT_EXECUTE(cpy_crit == dfl_rit);
		PRINT_EXECUTE(cpy_crit == dfl_crit);
		PRINT_EXECUTE(cpy_crit == par_rit);
		PRINT_EXECUTE(cpy_crit == par_crit);
		PRINT_EXECUTE(cpy_crit == cpy_rit);
		PRINT_EXECUTE(cpy_crit == cpy_crit);
	)
	_print_nl();
}

int	main	(void)
{
	_print_nl();
	_print_nl("test with vector");
	{
		VECTOR							v;
		VECTOR::reverse_iterator		rit;
		VECTOR::const_reverse_iterator	crit;

		v.reserve(SIZE);
		for (int i = 0; i < SIZE; i++)
			v.push_back(i);

		rit = v.rbegin();
		crit = v.rbegin();
		for (size_t i = 0; i < SIZE; i++)
		{
			_test(rit, crit);
			rit++;
			crit++;
		}
	}
	_print_nl();
	_print_nl("test with map");
	{
		MAP							m;
		MAP::reverse_iterator		rit;
		MAP::const_reverse_iterator	crit;

		for (int i = 0; i < SIZE; i++)
			m[i] = i;

		rit = m.rbegin();
		crit = m.rbegin();
		for (size_t i = 0; i < SIZE; i++)
		{
			_test(rit, crit);
			rit++;
			crit++;
		}
	}
}
