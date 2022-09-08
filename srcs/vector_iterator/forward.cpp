/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forward.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:52:23 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 18:54:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 5

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
		Iterator		it;
		ConstIterator	cit;

		PRINT_EXECUTE(it == Iterator());
		PRINT_EXECUTE(it == ConstIterator());
		PRINT_EXECUTE(it == cit);
		PRINT_EXECUTE(cit == ConstIterator());
		PRINT_EXECUTE(cit == Iterator());
		PRINT_EXECUTE(cit == it);

		PRINT_EXECUTE(it == src_it);
		PRINT_EXECUTE(it == src_cit);
		PRINT_EXECUTE(cit == src_it);
		PRINT_EXECUTE(cit == src_cit);

		PRINT_AND_EXECUTE(it = src_it);
		PRINT_AND_EXECUTE(cit = src_cit);

		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*cit);
		PRINT_EXECUTE(*src_cit);

		PRINT_EXECUTE(*it++);
		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*src_it++);
		PRINT_EXECUTE(*cit++);
		PRINT_EXECUTE(*cit);
		PRINT_EXECUTE(*src_cit);
		PRINT_EXECUTE(*src_cit++);

		PRINT_EXECUTE(*it);
		PRINT_EXECUTE(*src_it);
		PRINT_EXECUTE(*cit);
		PRINT_EXECUTE(*src_cit);
	)
}

int	main	(void)
{
	NAMESPACE::vector<size_t>					v;
	NAMESPACE::vector<size_t>::iterator			it;
	NAMESPACE::vector<size_t>::const_iterator	cit;

	for (size_t i = 0; i < SIZE; i++)
		v.push_back((i - 1) * (i + 1));
	
	for (size_t i = 0; i < SIZE - 1; i++)
	{
		it = v.begin() + i;
		cit = v.begin() + i;
		_test(it, cit);
	}
}
