/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirectional.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:29:56 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 19:04:55 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 8

template
<
	typename Iterator,
	typename ConstIterator
>
static void	_test	(Iterator src_it,
					 ConstIterator src_cit)
{
	TRY_CATCH
	(
		Iterator		it(src_it);
		ConstIterator	cit(src_cit);

		PRINT_EXECUTE(src_it == it);
		PRINT_EXECUTE(src_cit == it);
		PRINT_EXECUTE(src_it == cit);
		PRINT_EXECUTE(src_cit == cit);

		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*cit);

		PRINT_AND_EXECUTE(it--);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*cit);
		PRINT_AND_EXECUTE(cit--);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*cit);

		PRINT_AND_EXECUTE(--it);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*cit);
		PRINT_AND_EXECUTE(--cit);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*cit);

		PRINT_EXECUTE(*src_it--);
		PRINT_EXECUTE(*it--);
		PRINT_EXECUTE(*src_cit--);
		PRINT_EXECUTE(*cit--);
		PRINT_EXECUTE(*src_it--);
		PRINT_EXECUTE(*it--);
		PRINT_EXECUTE(*src_cit--);
		PRINT_EXECUTE(*cit--);
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>					v;
	NAMESPACE::vector<int>::iterator		it;
	NAMESPACE::vector<int>::const_iterator	cit;

	for (int i = 0; i < SIZE; i++)
	{
		v.push_back(i * 3);
	}
	for (size_t i = 3; i < SIZE; i++)
	{
		it = v.begin() + i;
		cit= v.begin() + i;
		_test(it, cit);
	}
}
