/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:13:14 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:51:28 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

# define SIZE 10

typedef NAMESPACE::vector<int>		VECTOR;
typedef NAMESPACE::map<int, int>	MAP;

template
<
	typename IteratorLeft,
	typename IteratorRight
>
static void	_test	(NAMESPACE::reverse_iterator<IteratorLeft> lhs,
					 NAMESPACE::reverse_iterator<IteratorRight> rhs)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(lhs == rhs);
		PRINT_AND_EXECUTE(lhs = rhs);
		PRINT_EXECUTE(lhs == rhs);
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
		for (int i = 0; i < 10; i++)
			v.push_back(i);

		for (size_t i = 0; i <= SIZE / 2; i++)
		{
			rit1 = v.rbegin() + i;
			rit2 = v.rend() - i - 1;
			crit1= v.rbegin() + i;
			crit2= v.rend() - i - 1;

			_test(rit1, rit1);
			_test(rit1, rit2);
			_test(rit2, rit1);
			_test(rit2, rit2);

			_test(crit1, crit1);
			_test(crit1, crit2);
			_test(crit2, crit1);
			_test(crit2, crit2);
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

		for (int i = 0; i < 10; i++)
			m[i] = i;

		for (size_t i = 0; i <= SIZE / 2; i++)
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
			for (size_t j = 0; j < SIZE - 1 - i; ++j)
			{
				rit2++;
				crit2++;
			}

			_test(rit1, rit1);
			_test(rit1, rit2);
			_test(rit2, rit1);
			_test(rit2, rit2);

			_test(crit1, crit1);
			_test(crit1, crit2);
			_test(crit2, crit1);
			_test(crit2, crit2);
		}
	}
	_print_nl();

	return (0);
}
