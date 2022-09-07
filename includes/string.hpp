/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:22:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:07:46 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_HPP
# define STRING_HPP

# include <ostream>
# include <sstream>

# include "type_traits.hpp"

namespace ft
{
	template
	<
		typename T
	>
	std::string	to_string	(T value,
							 typename ft::enable_if<is_integral<T>::value>::type = 0)
	{
		std::ostringstream	oss;
		oss	<< value;
		return (oss.str());
	}
}

#endif

