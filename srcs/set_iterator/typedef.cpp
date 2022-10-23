/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:51:39 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:22:49 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

typedef NAMESPACE::set<std::string>								SET;
typedef NAMESPACE::iterator_traits<SET::iterator>				ITT;
typedef NAMESPACE::iterator_traits<SET::iterator *>				POINTER_ITT;
typedef NAMESPACE::iterator_traits<SET::iterator const *>		CONST_POINTER_ITT;

typedef NAMESPACE::iterator_traits<SET::const_iterator>			CITT;
typedef NAMESPACE::iterator_traits<SET::const_iterator *>		POINTER_CITT;
typedef NAMESPACE::iterator_traits<SET::const_iterator const *>	CONST_POINTER_CITT;

typedef NAMESPACE::pair<std::string const, float>						PAIR;
typedef NAMESPACE::pair<std::string const, float const>					CONST_PAIR;

int	main	(void)
{
	PRINT_EXECUTE(typeid(ITT::difference_type).name());
	PRINT_EXECUTE(typeid(ITT::value_type).name()
				== typeid(PAIR).name() );
	PRINT_EXECUTE(typeid(ITT::pointer).name()
				== typeid(PAIR *).name() );
	PRINT_EXECUTE(typeid(ITT::reference).name()
				== typeid(PAIR &).name() );
	PRINT_EXECUTE(typeid(ITT::iterator_category).name());
	_print_nl();

	PRINT_EXECUTE(typeid(POINTER_ITT::difference_type).name());
	PRINT_EXECUTE(typeid(POINTER_ITT::value_type).name()
				== typeid(SET::iterator).name());
	PRINT_EXECUTE(typeid(POINTER_ITT::pointer).name()//);
				== typeid(SET::iterator *).name() );
	PRINT_EXECUTE(typeid(POINTER_ITT::reference).name()
				== typeid(SET::iterator &).name() );
	PRINT_EXECUTE(typeid(POINTER_ITT::iterator_category).name());
	_print_nl();

	PRINT_EXECUTE(typeid(CONST_POINTER_ITT::difference_type).name());
	PRINT_EXECUTE(typeid(CONST_POINTER_ITT::value_type).name()
				== typeid(SET::iterator).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_ITT::pointer).name()
				== typeid(SET::iterator const *).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_ITT::reference).name()
				== typeid(SET::iterator &).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_ITT::iterator_category).name());
	_print_nl();

	PRINT_EXECUTE(typeid(CITT::difference_type).name());
	PRINT_EXECUTE(typeid(CITT::value_type).name()
				== typeid(PAIR).name() );
	PRINT_EXECUTE(typeid(CITT::pointer).name()
				== typeid(PAIR const *).name() );
	PRINT_EXECUTE(typeid(CITT::reference).name()
				== typeid(PAIR).name());
	PRINT_EXECUTE(typeid(CITT::iterator_category).name());
	_print_nl();

	PRINT_EXECUTE(typeid(POINTER_CITT::difference_type).name());
	PRINT_EXECUTE(typeid(POINTER_CITT::value_type).name()
				== typeid(SET::const_iterator).name() );
	PRINT_EXECUTE(typeid(POINTER_CITT::pointer).name()
				== typeid(SET::const_iterator *).name() );
	PRINT_EXECUTE(typeid(POINTER_CITT::reference).name()
				== typeid(SET::const_iterator &).name() );
	PRINT_EXECUTE(typeid(POINTER_CITT::iterator_category).name());
	_print_nl();

	PRINT_EXECUTE(typeid(CONST_POINTER_CITT::difference_type).name());
	PRINT_EXECUTE(typeid(CONST_POINTER_CITT::value_type).name()
				== typeid(SET::const_iterator).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_CITT::pointer).name()
				== typeid(SET::const_iterator const *).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_CITT::reference).name()
				== typeid(SET::const_iterator).name() );
	PRINT_EXECUTE(typeid(CONST_POINTER_CITT::iterator_category).name());
	_print_nl();
}
