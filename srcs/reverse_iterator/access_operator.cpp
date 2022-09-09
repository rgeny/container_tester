/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:34:31 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 14:50:13 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 10

template
<
	typename RIterator
>
void	_test	(RIterator rit,
				 size_t n)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(*rit);
		PRINT_EXECUTE(rit->size());
		PRINT_EXECUTE(rit[n]);
	)
}


int	main	(void)
{
	NAMESPACE::vector<std::string>							v;
	NAMESPACE::vector<std::string>::reverse_iterator		rit;
	NAMESPACE::vector<std::string>::const_reverse_iterator	crit;
	std::string	str("abc");

	for (size_t i = 0; i < SIZE; i++)
	{
		v.push_back(str);
		for (size_t j = 0; j < str.size(); j++)
			++str[j];
	}

	for (size_t i = 0; i < SIZE / 2; i++)
	{
		rit = v.rbegin() + i;
		crit= v.rbegin() + i;
		_test(rit, i);
		_test(crit, i);
	}
}
