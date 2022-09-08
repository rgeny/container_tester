/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_same.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:02:54 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 17:30:57 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST_TYPE_TRAITS_HPP
# ifndef TEST_IS_SAME_HPP
#  define TEST_IS_SAME_HPP

template
<
	typename T,
	typename U
>
struct is_same
{	static bool const value = false;	};

template
<
	typename T
>
struct is_same<T, T>
{	static bool const value = true;		};

# endif
#endif

