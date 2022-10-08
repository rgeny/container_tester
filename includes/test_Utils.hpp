/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_Utils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:06:33 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 13:44:27 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_UTILS_HPP
# define TEST_UTILS_HPP

# include <iostream>
# include <algorithm>
# include <climits>
# include <typeinfo>

# include "test_InputIterator.hpp"

# ifndef NAMESPACE
#  define NAMESPACE ft
#  define FT
# else
#  define STD
# endif

//# include <list>
//# include <string>
//# include <iterator>
//# include <functional>
//
//# include "test_colors.hpp"
//
//
# define PRINT_EXECUTE(fct)	std::cout	<< "(" \
										<< #fct \
										<< ") == " \
										<< std::boolalpha \
										<< (fct) \
										<< std::endl
# define EXECUTE_AND_PRINT(ope)	ope; \
								std::cout	<< #ope \
											<< std::endl

# define PRINT_AND_EXECUTE(ope)	std::cout	<< #ope \
											<< std::endl; \
								ope

# define TRY_CATCH(code)	try \
							{ \
								code \
							} \
							catch ( std::exception const & err ) \
							{ \
								std::cout	<< "error" \
											<< std::endl; \
							}

void	_print_nl	(std::string msg = "");

template<class T>
void	_print_val	(T val)
{
	std::cout	<< val
				<< std::endl;
}

template<class T>
void	_print_size (T & v)
{
	std::cout	<< "size     : "
				<< v.size()
				<< std::endl
				<< "max_size : "
				<< v.max_size()
				<< std::endl
				<< "capacity : "
				<< v.capacity()
				<< std::endl;
}

template<class T1, class T2>
void	_print_val_and_size	(T2 & v)
{
	_print_size(v);
	std::for_each(v.begin(), v.end(), _print_val<T1>);
}

//template <class T>
//void	init_vector	(NAMESPACE::vector<T> & v
//					,size_t size
//					,T const & val)
//{
//	for (size_t i = 0; i < size; i++)
//		v[i] = ((val + i) * size) / (i + 1);
//}
//
//template
//<
//	typename T,
//	class Container
//>

#endif
