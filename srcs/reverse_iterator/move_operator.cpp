/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_operator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:12 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 10:52:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 21

template
<
	typename RIterator,
	typename CRIterator
>
static void	_test	(RIterator rit,
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
}

int	main	(void)
{
	NAMESPACE::vector<size_t>							v;
	NAMESPACE::vector<size_t>::reverse_iterator			rit;
	NAMESPACE::vector<size_t>::const_reverse_iterator	crit;

	v.reserve(SIZE);
	for (size_t i = 0; i < SIZE; i++)
		v.push_back(i * i * i - i);
	for (size_t i = 0; i < SIZE / 2; i++)
	{
		rit = v.rbegin() + i;
		crit = v.rbegin() + i;
		_test(rit, crit, i);
	}
}
