/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:21:08 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 17:07:27 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE 4
typedef NAMESPACE::set<float>	SET;

int	main	(void)
{
	SET		s;
	float	f = 3.1564;
	for (int i = 0; i < SIZE; ++i, f *= 14.12)
		s.insert(f);

	SET::key_type					key_type;
	SET::value_type					value_type;
	SET::size_type					size_type;
	SET::difference_type			difference_type;
	SET::key_compare				key_compare;
	SET::value_compare				value_compare;
	SET::allocator_type				allocator_type;
	SET::reference					reference = value_type;
	SET::const_reference			const_reference = value_type;
	SET::pointer					pointer = &value_type;
	SET::const_pointer				const_pointer = &value_type;
	SET::iterator					iterator;
	SET::const_iterator				const_iterator;
	SET::reverse_iterator			reverse_iterator;
	SET::const_reverse_iterator		const_reverse_iterator;

	SET::value_type		lhs(1.795);

	PRINT_EXECUTE((key_type = -2147483648));
	PRINT_EXECUTE((value_type = -867.1487));
	PRINT_EXECUTE((size_type = -1));
	PRINT_EXECUTE((difference_type = -2));
	_print_nl();
	
	PRINT_EXECUTE((key_compare(lhs, value_type)));
	PRINT_EXECUTE((key_compare(lhs, lhs)));
	PRINT_EXECUTE((key_compare(lhs, lhs + 1)));
	PRINT_EXECUTE((key_compare(lhs, reference)));
	PRINT_EXECUTE((key_compare(lhs, const_reference)));
	_print_nl();

	PRINT_EXECUTE((key_compare(value_type, value_type)));
	PRINT_EXECUTE((key_compare(value_type, value_type + 1)));
	PRINT_EXECUTE((key_compare(value_type, lhs)));
	PRINT_EXECUTE((key_compare(value_type, reference)));
	PRINT_EXECUTE((key_compare(value_type, const_reference)));
	_print_nl();

	PRINT_EXECUTE((key_compare(reference, reference)));
	PRINT_EXECUTE((key_compare(reference, reference + 1)));
	PRINT_EXECUTE((key_compare(reference, value_type)));
	PRINT_EXECUTE((key_compare(reference, lhs)));
	PRINT_EXECUTE((key_compare(reference, const_reference)));
	_print_nl();

	PRINT_EXECUTE((key_compare(const_reference, const_reference)));
	PRINT_EXECUTE((key_compare(const_reference, const_reference + 1)));
	PRINT_EXECUTE((key_compare(const_reference, value_type)));
	PRINT_EXECUTE((key_compare(const_reference, lhs)));
	PRINT_EXECUTE((key_compare(const_reference, reference)));
	_print_nl();

	PRINT_EXECUTE((value_compare(lhs, value_type)));
	PRINT_EXECUTE((value_compare(lhs, lhs)));
	PRINT_EXECUTE((value_compare(lhs, lhs + 1)));
	PRINT_EXECUTE((value_compare(lhs, reference)));
	PRINT_EXECUTE((value_compare(lhs, const_reference)));
	_print_nl();

	PRINT_EXECUTE((value_compare(value_type, value_type)));
	PRINT_EXECUTE((value_compare(value_type, value_type + 1)));
	PRINT_EXECUTE((value_compare(value_type, lhs)));
	PRINT_EXECUTE((value_compare(value_type, reference)));
	PRINT_EXECUTE((value_compare(value_type, const_reference)));
	_print_nl();

	PRINT_EXECUTE((value_compare(reference, reference)));
	PRINT_EXECUTE((value_compare(reference, reference + 1)));
	PRINT_EXECUTE((value_compare(reference, value_type)));
	PRINT_EXECUTE((value_compare(reference, lhs)));
	PRINT_EXECUTE((value_compare(reference, const_reference)));
	_print_nl();

	PRINT_EXECUTE((value_compare(const_reference, const_reference)));
	PRINT_EXECUTE((value_compare(const_reference, const_reference + 1)));
	PRINT_EXECUTE((value_compare(const_reference, value_type)));
	PRINT_EXECUTE((value_compare(const_reference, lhs)));
	PRINT_EXECUTE((value_compare(const_reference, reference)));
	_print_nl();


	PRINT_EXECUTE(allocator_type.max_size());
	_print_nl();

	PRINT_EXECUTE((value_type));
	PRINT_EXECUTE((reference = 1.186));
	PRINT_EXECUTE((value_type));
	PRINT_EXECUTE((const_reference));
	PRINT_EXECUTE((*pointer = 17897.182));
	PRINT_EXECUTE((value_type));
	PRINT_EXECUTE((*const_pointer));

	PRINT_EXECUTE((*const_pointer == value_type));
	_print_nl();

	PRINT_EXECUTE(*(iterator = s.begin()));
	PRINT_EXECUTE(*iterator);
	PRINT_EXECUTE(*(const_iterator = (++iterator)));
	PRINT_EXECUTE(*const_iterator);
	_print_nl();

	PRINT_EXECUTE(*(reverse_iterator = s.rbegin()));
	PRINT_EXECUTE(*reverse_iterator);
	PRINT_EXECUTE(*(const_reverse_iterator = (++reverse_iterator)));
	PRINT_EXECUTE(*const_reverse_iterator);
	_print_nl();

	PRINT_EXECUTE(typeid(SET::iterator).name()
				== typeid(SET::const_iterator).name());
	PRINT_EXECUTE(typeid(SET::reverse_iterator).name()
				== typeid(SET::const_reverse_iterator).name());
}
