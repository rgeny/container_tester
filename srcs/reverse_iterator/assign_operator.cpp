/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:13:14 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 14:28:10 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

# define SIZE 10

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
}

int	main	(void)
{
	NAMESPACE::vector<int>							v;
	NAMESPACE::vector<int>::reverse_iterator		rit1,
													rit2;
	NAMESPACE::vector<int>::const_reverse_iterator	crit1,
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

	return (0);
}
