/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:32:59 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 16:20:30 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

typedef NAMESPACE::vector<int>									VECTOR;
typedef NAMESPACE::iterator_traits<VECTOR::iterator>			ITT;
typedef NAMESPACE::iterator_traits<VECTOR::iterator *>			POINTER_ITT;
typedef NAMESPACE::iterator_traits<VECTOR::iterator const *>	CONST_POINTER_ITT;

typedef NAMESPACE::iterator_traits<VECTOR::const_iterator>			CITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_iterator *>		POINTER_CITT;
typedef NAMESPACE::iterator_traits<VECTOR::const_iterator const *>	CONST_POINTER_CITT;

int	main	(void)
{
	PRINT_EXECUTE(typeid (ITT::difference_type).name());
	PRINT_EXECUTE(typeid (ITT::value_type).name());
	PRINT_EXECUTE(typeid (ITT::pointer).name());
	PRINT_EXECUTE(typeid (ITT::reference).name());
	PRINT_EXECUTE(typeid (ITT::iterator_category).name());

	PRINT_EXECUTE(typeid (POINTER_ITT::difference_type).name());
	PRINT_EXECUTE(typeid (POINTER_ITT::value_type).name()
				  == typeid (VECTOR::iterator).name() );
	PRINT_EXECUTE(typeid (POINTER_ITT::pointer).name()
				  == typeid (VECTOR::iterator *).name() );
	PRINT_EXECUTE(typeid (POINTER_ITT::reference).name()
				  == typeid (VECTOR::iterator).name() );
	PRINT_EXECUTE(typeid (POINTER_ITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CONST_POINTER_ITT::difference_type).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_ITT::value_type).name()
				  == typeid (VECTOR::iterator).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_ITT::pointer).name()
				  == typeid (VECTOR::iterator const *).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_ITT::reference).name()
				  == typeid (VECTOR::iterator).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_ITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CITT::difference_type).name());
	PRINT_EXECUTE(typeid (CITT::value_type).name());
	PRINT_EXECUTE(typeid (CITT::pointer).name());
	PRINT_EXECUTE(typeid (CITT::reference).name());
	PRINT_EXECUTE(typeid (CITT::iterator_category).name());

	PRINT_EXECUTE(typeid (POINTER_CITT::difference_type).name());
	PRINT_EXECUTE(typeid (POINTER_CITT::value_type).name()
				  == typeid (VECTOR::const_iterator).name() );
	PRINT_EXECUTE(typeid (POINTER_CITT::pointer).name()
				  == typeid (VECTOR::const_iterator *).name() );
	PRINT_EXECUTE(typeid (POINTER_CITT::reference).name()
				  == typeid (VECTOR::const_iterator).name() );
	PRINT_EXECUTE(typeid (POINTER_CITT::iterator_category).name());

	PRINT_EXECUTE(typeid (CONST_POINTER_CITT::difference_type).name());
	PRINT_EXECUTE(typeid (CONST_POINTER_CITT::value_type).name()
				  == typeid (VECTOR::const_iterator).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_CITT::pointer).name()
				  == typeid (VECTOR::const_iterator const *).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_CITT::reference).name()
				  == typeid (VECTOR::const_iterator).name() );
	PRINT_EXECUTE(typeid (CONST_POINTER_CITT::iterator_category).name());
}
