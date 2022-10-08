/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_operator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:12 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:57:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

#define SIZE 21

typedef NAMESPACE::vector<size_t>		VECTOR;
typedef NAMESPACE::map<size_t, int>		MAP;

template
<
	typename RIterator,
	typename CRIterator
>
static void	_test_vector	(RIterator rit,
							 CRIterator crit,
							 size_t n)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(*rit);
		PRINT_EXECUTE(*crit);

//	operator++ / operator--
		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE(rit++ == crit);
		PRINT_EXECUTE(--rit == crit);
		PRINT_EXECUTE(++rit == crit);
		PRINT_EXECUTE(rit-- == crit);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE(crit++ == rit);
		PRINT_EXECUTE(--crit == rit);
		PRINT_EXECUTE(++crit == rit);
		PRINT_EXECUTE(crit-- == rit);

		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE(rit++ == crit++);
		PRINT_EXECUTE(--rit == --crit);
		PRINT_EXECUTE(++rit == ++crit);
		PRINT_EXECUTE(rit-- == crit--);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE(crit++ == rit++);
		PRINT_EXECUTE(--crit == --rit);
		PRINT_EXECUTE(++crit == ++rit);
		PRINT_EXECUTE(crit-- == rit--);

//	operator + / operator -
		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE((rit + n) - crit);
		PRINT_EXECUTE((n + rit) - crit);
		PRINT_EXECUTE((rit - n) - crit);
		PRINT_EXECUTE(rit - crit);
		PRINT_EXECUTE(crit - rit);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE((crit + n) - rit);
		PRINT_EXECUTE((n + crit) - rit);
		PRINT_EXECUTE((crit - n) - rit);
		PRINT_EXECUTE(rit - crit);
		PRINT_EXECUTE(crit - rit);

		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE((rit + n) - (crit + n));
		PRINT_EXECUTE((n + rit) - (n + crit));
		PRINT_EXECUTE((rit - n) - (crit - n));
		PRINT_EXECUTE(rit - crit);
		PRINT_EXECUTE(crit - rit);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE((crit + n) - (rit + n));
		PRINT_EXECUTE((n + crit) - (n + rit));
		PRINT_EXECUTE((crit - n) - (rit - n));
		PRINT_EXECUTE(rit - crit);
		PRINT_EXECUTE(crit - rit);


//	operator += / operator-=

		PRINT_EXECUTE(rit == crit);
		PRINT_AND_EXECUTE(rit += n);
		PRINT_EXECUTE(rit == crit);
		PRINT_AND_EXECUTE(rit -= n);
		PRINT_EXECUTE(rit == crit);
		PRINT_AND_EXECUTE(crit += n);
		PRINT_EXECUTE(crit == rit);
		PRINT_AND_EXECUTE(crit -= n);
		PRINT_EXECUTE(crit == rit);

		PRINT_EXECUTE(rit == crit);
		PRINT_AND_EXECUTE(rit += n);
		PRINT_AND_EXECUTE(crit += n);
		PRINT_EXECUTE(rit == crit);

		PRINT_EXECUTE(rit == crit);
		PRINT_AND_EXECUTE(rit -= n);
		PRINT_AND_EXECUTE(crit -= n);
		PRINT_EXECUTE(rit == crit);
	)
	_print_nl();
}

template
<
	typename RIterator,
	typename CRIterator
>
static void	_test_map	(RIterator rit,
						 CRIterator crit,
						 size_t n)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(*rit);
		PRINT_EXECUTE(*crit);

//	operator++ / operator--
		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE(rit++ == crit);
		PRINT_EXECUTE(--rit == crit);
		PRINT_EXECUTE(++rit == crit);
		PRINT_EXECUTE(rit-- == crit);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE(crit++ == rit);
		PRINT_EXECUTE(--crit == rit);
		PRINT_EXECUTE(++crit == rit);
		PRINT_EXECUTE(crit-- == rit);

		PRINT_EXECUTE(rit == crit);
		PRINT_EXECUTE(rit++ == crit++);
		PRINT_EXECUTE(--rit == --crit);
		PRINT_EXECUTE(++rit == ++crit);
		PRINT_EXECUTE(rit-- == crit--);

		PRINT_EXECUTE(crit == rit);
		PRINT_EXECUTE(crit++ == rit++);
		PRINT_EXECUTE(--crit == --rit);
		PRINT_EXECUTE(++crit == ++rit);
		PRINT_EXECUTE(crit-- == rit--);
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
		for (size_t i = 0; i < SIZE; i++)
			v.push_back(i * i * i - i);
		for (size_t i = 0; i < SIZE / 2; i++)
		{
			rit = v.rbegin() + i;
			crit = v.rbegin() + i;
			_test_vector(rit, crit, i);
		}
	}
	_print_nl();
	_print_nl("test with map");
	{
		MAP							m;
		MAP::reverse_iterator		rit;
		MAP::const_reverse_iterator	crit;

		for (size_t i = 0; i < SIZE; i++)
			m[i * i * i - i] = i;
		rit = m.rbegin();
		crit = m.rbegin();
		for (size_t i = 0; i < SIZE / 2; i++)
		{
			_test_map(rit, crit, i);
			rit++;
			crit++;
		}
	}
}
