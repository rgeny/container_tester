/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_reverse_iterator.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:21:52 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:01:43 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_REVERSE_ITERATOR_HPP
# define TEST_REVERSE_ITERATOR_HPP

# include "test_Utils.hpp"

# ifdef FT
#  include "vector.hpp"
#  include "map.hpp"
template
<
	typename T1,
	typename T2
>
std::ostream &	operator<<	(std::ostream & os,
							 ft::pair<T1, T2> const & p)
{
	os	<< "("
		<< p.first
		<< ":"
		<< p.second
		<< ")";
	return (os);
}
# else
#  include <vector>
#  include <map>
# endif

template
<
	typename T1,
	typename T2
>
std::ostream &	operator<<	(std::ostream & os,
							 std::pair<T1, T2> const & p)
{
	os	<< "("
		<< p.first
		<< ":"
		<< p.second
		<< ")";
	return (os);
}


#endif

