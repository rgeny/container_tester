/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traits.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:52:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 16:25:26 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

typedef NAMESPACE::vector<int>												VECTOR;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator>				RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator *>				POINTER_RITT;
typedef NAMESPACE::iterator_traits<VECTOR::reverse_iterator const *>		CONST_POINTER_RITT;

typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator>			CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator *>		POINTER_CRITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_reverse_iterator const *>	CONST_POINTER_CRITT;

int	main	(void)
{
	PRINT_EXECUTE(typeid (RITT::difference_type).name());
	PRINT_EXECUTE(typeid (RITT::value_type).name());
	PRINT_EXECUTE(typeid (RITT::pointer).name());
	PRINT_EXECUTE(typeid (RITT::reference).name());
	PRINT_EXECUTE(typeid (RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (POINTER_RITT::value_type).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (POINTER_RITT::pointer).name()
				  == typeid (VECTOR::reverse_iterator *).name());
	PRINT_EXECUTE(typeid (POINTER_RITT::reference).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CONST_POINTER_RITT::difference_type).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_RITT::value_type).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_RITT::pointer).name()
				  == typeid (VECTOR::reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_RITT::reference).name()
				  == typeid (VECTOR::reverse_iterator).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_RITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (CRITT::value_type).name());
	PRINT_EXECUTE(typeid (CRITT::pointer).name());
	PRINT_EXECUTE(typeid (CRITT::reference).name());
	PRINT_EXECUTE(typeid (CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (POINTER_CRITT::value_type).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (POINTER_CRITT::pointer).name()
				  == typeid (VECTOR::const_reverse_iterator *).name());
	PRINT_EXECUTE(typeid (POINTER_CRITT::reference).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (POINTER_CRITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CONST_POINTER_CRITT::difference_type).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_CRITT::value_type).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_CRITT::pointer).name()
				  == typeid (VECTOR::const_reverse_iterator const *).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_CRITT::reference).name()
				  == typeid (VECTOR::const_reverse_iterator).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_CRITT::iterator_category).name());

	return (0);
}
