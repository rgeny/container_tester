/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:31:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/04 16:45:30 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MAP_HPP
# define TEST_MAP_HPP

# include "test_Utils.hpp"

# ifdef FT
#  include "map.hpp"
# else
#  include <map>
# endif

template
<
	typename T1,
	typename T2
>
std::ostream &	operator<<	(std::ostream & os,
							 std::pair<T1, T2> const & pair)
{
	os	<< "("
		<< pair.first
		<< ":"
		<< pair.second
		<< ")";
	return (os);
}

#endif

