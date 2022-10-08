/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compares_operator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:42:10 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:42:27 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

#define SIZE 9

typedef NAMESPACE::vector<int>		VECTOR;
typedef NAMESPACE::map<int, int>	MAP;

template
<
	typename RIterator,
	typename ConstRIterator
>
static void	_test_vector	(RIterator rit1,
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
	_print_nl();
}

template
<
	typename RIterator,
	typename ConstRIterator
>
static void	_test_map	(RIterator rit1,
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
	)
	_print_nl();
}

int	main	(void)
{
	_print_nl();
	_print_nl("test with vector");
	{
		VECTOR							v;
		VECTOR::reverse_iterator		rit1,
				  						rit2;
		VECTOR::const_reverse_iterator	crit1,
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
			_test_vector(rit1, rit2, crit1, crit2);
		}
	}
	_print_nl();
	_print_nl("test with map");
	{
		MAP							m;
		MAP::reverse_iterator		rit1,
			  						rit2;
		MAP::const_reverse_iterator	crit1,
									crit2;

		for (int i = 0; i < SIZE; i++)
			m[i] = i;
		
		for (size_t i = 0; i < SIZE / 2; i++)
		{
			rit1 = m.rbegin();
			rit2 = m.rend();
			crit1= m.rbegin();
			crit2= m.rend();
			for (size_t j = 0; j < i; ++j)
			{
				rit1++;
				crit1++;
			}
			for (size_t j = 0; j < SIZE - i - 1; ++j)
			{
				rit2++;
				crit2++;
			}
			_test_map(rit1, rit2, crit1, crit2);
		}
	}
}
