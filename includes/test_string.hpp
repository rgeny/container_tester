/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:22:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/08 14:48:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STRING_HPP
# define TEST_STRING_HPP

# include <ostream>
# include <sstream>

# include "test_type_traits.hpp"

namespace test
{
	template
	<
		typename T
	>
	std::string	to_string	(T value,
							 typename enable_if<test::is_integral<T>::value>::type = 0)
	{
		std::ostringstream	oss;
		oss	<< value;
		return (oss.str());
	}
}

#endif

