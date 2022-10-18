/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:31:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/17 16:40:33 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MAP_HPP
# define TEST_MAP_HPP

# include "test_Utils.hpp"

# ifdef FT
#  include "pair.hpp"
# else
#  include <utility>
# endif

template
<
	typename T1,
	typename T2
>
std::ostream &	operator<<	(std::ostream & os,
							 NAMESPACE::pair<T1, T2> const & pair)
{
//	os	<< "("
//		<< pair.first
//		<< ":"
//		<< pair.second
//		<< ")";
	os	<< pair.first;
	return (os);
}

# ifdef FT
#  include "map.hpp"
# else
#  include <map>
# endif

template
<
	typename Key,
	typename Value
>
void	print_map	(NAMESPACE::map<Key, Value> const & map)
{
	_print_nl();
	_print_nl("print_map");
	for (typename NAMESPACE::map<Key, Value>::const_iterator it = map.begin(), ite = map.end();
		 it != ite;
		 ++it)
	{
		std::cout	<< *it
					<< std::endl;
	}
}

#endif

