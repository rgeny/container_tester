/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_set.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:53:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 16:55:05 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_SET_HPP
# define TEST_SET_HPP

# include "test_Utils.hpp"

# ifdef FT
#  include "set.hpp"
# else
#  include <set>
# endif

template < typename Value >
void	print_set	(NAMESPACE::set<Value> const & set)
{
	_print_nl();
	_print_nl("print set");
	for (typename NAMESPACE::set<Value>::const_iterator it = set.begin(), ite = set.end();
		 it != ite;
		 ++it)
	{
		std::cout	<< *it
					<< std::endl;
	}
}

#endif

