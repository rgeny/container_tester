/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:24:23 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:34:00 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 13

template
<
	typename Iterator
>
static void	_test	(Iterator it1,
					 Iterator it2,
					 int dist)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(std::distance(it1, it2));

		PRINT_AND_EXECUTE(std::advance(it1, dist));
		PRINT_EXECUTE(std::distance(it1, it2));
		PRINT_AND_EXECUTE(std::advance(it1, -dist));
		PRINT_EXECUTE(std::distance(it1, it2));

		PRINT_AND_EXECUTE(std::advance(it2, dist));
		PRINT_EXECUTE(std::distance(it1, it2));
		PRINT_AND_EXECUTE(std::advance(it2, -dist));
		PRINT_EXECUTE(std::distance(it1, it2));
	);
}

int	main	(void)
{
	NAMESPACE::vector<int>					v;
	NAMESPACE::vector<int>::iterator		it,
											ite;
	NAMESPACE::vector<int>::const_iterator	cit,
											cite;

	for (int i = 0; i < SIZE; i++)
		v.push_back( -i * 4);
	for (int i = 0; i < SIZE / 2; i++)
	{
		it = v.begin() + i;
		ite = v.end() - i - 1;
		cit = v.begin() + i;
		cite = v.end() - i - 1;
		_test(it, ite, i);
		_test(cit, cite, i);
	}

	return (0);
}
