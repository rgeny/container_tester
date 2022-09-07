/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structor.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:27:44 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:41:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

template
<
	typename RIterator,
	typename
>
static void	_test	(RIterator rit)
{
	RIterator	dfl_it,
				par_it(rit.base()),
				cpy_it(rit);
	TRY_CATCH
	(
		
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>	v;

	
}
