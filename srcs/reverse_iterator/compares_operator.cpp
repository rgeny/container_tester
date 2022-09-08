/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compares_operator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:42:10 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/08 15:52:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 9

template
<
	typename RIterator,
	typename ConstRIterator
>
static void	_test	(RIterator rit1,
					 RIterator rit2,
					 ConstRIterator crit1,
					 ConstRIterator crit2)
{
	TRY_CATCH
	(
//	operator==
		PRINT_EXECUTE(rit1  == rit1);
		PRINT_EXECUTE(rit1  == rit2);
		PRINT_EXECUTE(rit1  == crit1);
		PRINT_EXECUTE(rit1  == crit2);

		PRINT_EXECUTE(rit2  == rit1);
		PRINT_EXECUTE(rit2  == rit2);
		PRINT_EXECUTE(rit2  == crit1);
		PRINT_EXECUTE(rit2  == crit2);

		PRINT_EXECUTE(crit1 == rit1);
		PRINT_EXECUTE(crit1 == rit2);
		PRINT_EXECUTE(crit1 == crit1);
		PRINT_EXECUTE(crit1 == crit2);

		PRINT_EXECUTE(crit2 == rit1);
		PRINT_EXECUTE(crit2 == rit2);
		PRINT_EXECUTE(crit2 == crit1);
		PRINT_EXECUTE(crit2 == crit2);

//	operator !=
		PRINT_EXECUTE(rit1  != rit1);
		PRINT_EXECUTE(rit1  != rit2);
		PRINT_EXECUTE(rit1  != crit1);
		PRINT_EXECUTE(rit1  != crit2);

		PRINT_EXECUTE(rit2  != rit1);
		PRINT_EXECUTE(rit2  != rit2);
		PRINT_EXECUTE(rit2  != crit1);
		PRINT_EXECUTE(rit2  != crit2);

		PRINT_EXECUTE(crit1 != rit1);
		PRINT_EXECUTE(crit1 != rit2);
		PRINT_EXECUTE(crit1 != crit1);
		PRINT_EXECUTE(crit1 != crit2);

		PRINT_EXECUTE(crit2 != rit1);
		PRINT_EXECUTE(crit2 != rit2);
		PRINT_EXECUTE(crit2 != crit1);
		PRINT_EXECUTE(crit2 != crit2);

//	operator <
		PRINT_EXECUTE(rit1  < rit1);
		PRINT_EXECUTE(rit1  < rit2);
		PRINT_EXECUTE(rit1  < crit1);
		PRINT_EXECUTE(rit1  < crit2);

		PRINT_EXECUTE(rit2  < rit1);
		PRINT_EXECUTE(rit2  < rit2);
		PRINT_EXECUTE(rit2  < crit1);
		PRINT_EXECUTE(rit2  < crit2);

		PRINT_EXECUTE(crit1 < rit1);
		PRINT_EXECUTE(crit1 < rit2);
		PRINT_EXECUTE(crit1 < crit1);
		PRINT_EXECUTE(crit1 < crit2);

		PRINT_EXECUTE(crit2 < rit1);
		PRINT_EXECUTE(crit2 < rit2);
		PRINT_EXECUTE(crit2 < crit1);
		PRINT_EXECUTE(crit2 < crit2);

//	operator <=
		PRINT_EXECUTE(rit1  <= rit1);
		PRINT_EXECUTE(rit1  <= rit2);
		PRINT_EXECUTE(rit1  <= crit1);
		PRINT_EXECUTE(rit1  <= crit2);

		PRINT_EXECUTE(rit2  <= rit1);
		PRINT_EXECUTE(rit2  <= rit2);
		PRINT_EXECUTE(rit2  <= crit1);
		PRINT_EXECUTE(rit2  <= crit2);

		PRINT_EXECUTE(crit1 <= rit1);
		PRINT_EXECUTE(crit1 <= rit2);
		PRINT_EXECUTE(crit1 <= crit1);
		PRINT_EXECUTE(crit1 <= crit2);

		PRINT_EXECUTE(crit2 <= rit1);
		PRINT_EXECUTE(crit2 <= rit2);
		PRINT_EXECUTE(crit2 <= crit1);
		PRINT_EXECUTE(crit2 <= crit2);

//	operator >
		PRINT_EXECUTE(rit1  > rit1);
		PRINT_EXECUTE(rit1  > rit2);
		PRINT_EXECUTE(rit1  > crit1);
		PRINT_EXECUTE(rit1  > crit2);

		PRINT_EXECUTE(rit2  > rit1);
		PRINT_EXECUTE(rit2  > rit2);
		PRINT_EXECUTE(rit2  > crit1);
		PRINT_EXECUTE(rit2  > crit2);

		PRINT_EXECUTE(crit1 > rit1);
		PRINT_EXECUTE(crit1 > rit2);
		PRINT_EXECUTE(crit1 > crit1);
		PRINT_EXECUTE(crit1 > crit2);

		PRINT_EXECUTE(crit2 > rit1);
		PRINT_EXECUTE(crit2 > rit2);
		PRINT_EXECUTE(crit2 > crit1);
		PRINT_EXECUTE(crit2 > crit2);

//	operator >=
		PRINT_EXECUTE(rit1  >= rit1);
	NAMESPACE::vector<int>	v;
		PRINT_EXECUTE(rit1  >= rit2);
		PRINT_EXECUTE(rit1  >= crit1);
		PRINT_EXECUTE(rit1  >= crit2);

		PRINT_EXECUTE(rit2  >= rit1);
		PRINT_EXECUTE(rit2  >= rit2);
		PRINT_EXECUTE(rit2  >= crit1);
		PRINT_EXECUTE(rit2  >= crit2);

		PRINT_EXECUTE(crit1 >= rit1);
		PRINT_EXECUTE(crit1 >= rit2);
		PRINT_EXECUTE(crit1 >= crit1);
		PRINT_EXECUTE(crit1 >= crit2);

		PRINT_EXECUTE(crit2 >= rit1);
		PRINT_EXECUTE(crit2 >= rit2);
		PRINT_EXECUTE(crit2 >= crit1);
		PRINT_EXECUTE(crit2 >= crit2);
	)
}


int	main	(void)
{
	NAMESPACE::vector<int>							v;
	NAMESPACE::vector<int>::reverse_iterator		rit1,
													rit2;
	NAMESPACE::vector<int>::const_reverse_iterator	crit1,
													crit2;

	v.reserve(SIZE);

	for (int i = 0; i < SIZE; i++)
		v.push_back(i);
	
	for (size_t i = 0; i < SIZE / 2; i++)
	{
		rit1 = v.rbegin() + i;
		rit2 = v.rend() - i - 1;
		crit1= v.rbegin() + i;
		crit2= v.rend() - i - 1;
		_test(rit1, rit2, crit1, crit2);
	}
}
