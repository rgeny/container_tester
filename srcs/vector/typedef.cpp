/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:32:05 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/19 14:54:00 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 3
typedef NAMESPACE::vector<int>	VECTOR;

int	main	(void)
{
	VECTOR								v;

	for (size_t i = 0; i < SIZE; ++i)
		v.push_back(i * (i + i));

	VECTOR::value_type i;
	VECTOR::allocator_type				alloc = v.get_allocator();
	VECTOR::size_type					size_type;
	VECTOR::difference_type				difference_type;
	VECTOR::reference					ref = i;
	VECTOR::const_reference				const_ref = ref;
	VECTOR::pointer						pointer;
	VECTOR::const_pointer				const_pointer;
	VECTOR::iterator					it;
	VECTOR::const_iterator				const_it;
	VECTOR::reverse_iterator			reverse_it;
	VECTOR::const_reverse_iterator		const_reverse_it;

	PRINT_EXECUTE(alloc.max_size());
	PRINT_EXECUTE((size_type = -1));
	PRINT_EXECUTE((difference_type = -2));
	_print_nl();
	PRINT_EXECUTE((i = -2147483648));
	PRINT_EXECUTE(ref);
	PRINT_EXECUTE(const_ref);
	PRINT_EXECUTE(*(pointer = &ref));
	PRINT_EXECUTE(*(const_pointer = &const_ref));
	_print_nl();
	PRINT_EXECUTE((i = 7));
	PRINT_EXECUTE(ref);
	PRINT_EXECUTE(const_ref);
	PRINT_EXECUTE(*pointer);
	PRINT_EXECUTE(*const_pointer);
	_print_nl();
	PRINT_EXECUTE(*(it = v.begin()));
	PRINT_EXECUTE(*(const_it = v.begin() + 2));
	PRINT_EXECUTE(*(reverse_it = v.rbegin()));
	PRINT_EXECUTE(*(const_reverse_it = v.rbegin() + 1));
	_print_nl();
	PRINT_EXECUTE(typeid(VECTOR::value_type).name());
	PRINT_EXECUTE(typeid(VECTOR::allocator_type).name());
	PRINT_EXECUTE(typeid(VECTOR::size_type).name());
	PRINT_EXECUTE(typeid(VECTOR::difference_type).name());
	PRINT_EXECUTE(typeid(VECTOR::reference).name());
	PRINT_EXECUTE(typeid(VECTOR::const_reference).name());
	PRINT_EXECUTE(typeid(VECTOR::pointer).name());
	PRINT_EXECUTE(typeid(VECTOR::const_pointer).name());
	PRINT_EXECUTE(typeid(VECTOR::iterator).name()
					!= typeid(VECTOR::pointer).name());
	PRINT_EXECUTE(typeid(VECTOR::const_iterator).name()
					!= typeid(VECTOR::const_pointer).name());
	PRINT_EXECUTE(typeid(VECTOR::reverse_iterator).name()
					== typeid(NAMESPACE::reverse_iterator<VECTOR::iterator>).name());
	PRINT_EXECUTE(typeid(VECTOR::const_reverse_iterator).name()
					== typeid(NAMESPACE::reverse_iterator<VECTOR::const_iterator>).name());
}
