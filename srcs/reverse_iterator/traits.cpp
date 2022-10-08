/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traits.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:52:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 16:04:53 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

typedef NAMESPACE::vector<int>												VECTOR;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator>				VECT_RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator *>				VECT_POINTER_RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator const *>		VECT_CONST_POINTER_RITT;

typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator>			VECT_CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator *>		VECT_POINTER_CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator const *>	VECT_CONST_POINTER_CRITT;

typedef NAMESPACE::map<int, int>											MAP;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator>				MAP_RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator *>				MAP_POINTER_RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator const *>		MAP_CONST_POINTER_RITT;

typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator>			MAP_CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator *>		MAP_POINTER_CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator const *>	MAP_CONST_POINTER_CRITT;

int	main	(void)
{
	PRINT_EXECUTE(typeid (VECT_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_RITT::value_type).name());
	PRINT_EXECUTE(typeid (VECT_RITT::pointer).name());
	PRINT_EXECUTE(typeid (VECT_RITT::reference).name());
	PRINT_EXECUTE(typeid (VECT_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_RITT::value_type).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_RITT::pointer).name()
				  == typeid (VECTOR::reverse_iterator *).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_RITT::reference).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_RITT::value_type).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_RITT::pointer).name()
				  == typeid (VECTOR::reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_RITT::reference).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_CRITT::value_type).name());
	PRINT_EXECUTE(typeid (VECT_CRITT::pointer).name());
	PRINT_EXECUTE(typeid (VECT_CRITT::reference).name());
	PRINT_EXECUTE(typeid (VECT_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_CRITT::value_type).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_CRITT::pointer).name()
				  == typeid (VECTOR::const_reverse_iterator *).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_CRITT::reference).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_POINTER_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_CRITT::value_type).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_CRITT::pointer).name()
				  == typeid (VECTOR::const_reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_CRITT::reference).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (VECT_CONST_POINTER_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (VECT_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (VECT_RITT::value_type).name());
	PRINT_EXECUTE(typeid (VECT_RITT::pointer).name());
	PRINT_EXECUTE(typeid (VECT_RITT::reference).name());
	PRINT_EXECUTE(typeid (VECT_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (MAP_POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_RITT::value_type).name()
				  == typeid (MAP::reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_RITT::pointer).name()
				  == typeid (MAP::reverse_iterator *).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_RITT::reference).name()
				  == typeid (MAP::reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_RITT::value_type).name()
				  == typeid (MAP::reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_RITT::pointer).name()
				  == typeid (MAP::reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_RITT::reference).name()
				  == typeid (MAP::reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (MAP_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (MAP_CRITT::value_type).name());
	PRINT_EXECUTE(typeid (MAP_CRITT::pointer).name());
	PRINT_EXECUTE(typeid (MAP_CRITT::reference).name());
	PRINT_EXECUTE(typeid (MAP_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (MAP_POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_CRITT::value_type).name()
				  == typeid (MAP::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_CRITT::pointer).name()
				  == typeid (MAP::const_reverse_iterator *).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_CRITT::reference).name()
				  == typeid (MAP::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_POINTER_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_CRITT::value_type).name()
				  == typeid (MAP::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_CRITT::pointer).name()
				  == typeid (MAP::const_reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_CRITT::reference).name()
				  == typeid (MAP::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (MAP_CONST_POINTER_CRITT::iterator_category).name());
	return (0);
}
