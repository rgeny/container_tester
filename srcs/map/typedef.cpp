/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:21:08 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/01 18:56:59 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 4
typedef NAMESPACE::map<int, float>	MAP;

int	main	(void)
{
	MAP		m;
	float	f = 3.1564;
	for (int i = 0; i < SIZE; ++i, f *= 14.12)
		m[i * i - 1] = f;

	MAP::key_type					key_type;
	MAP::mapped_type				mapped_type;
	MAP::value_type					value_type;
	MAP::size_type					size_type;
	MAP::difference_type			difference_type;
	MAP::key_compare				key_compare;
	MAP::allocator_type				allocator_type;
	MAP::reference					reference = value_type;
	MAP::const_reference			const_reference = value_type;
	MAP::pointer					pointer = &value_type;
	MAP::const_pointer				const_pointer = &value_type;
	MAP::iterator					iterator;
	MAP::const_iterator				const_iterator;
	MAP::reverse_iterator			reverse_iterator;
	MAP::const_reverse_iterator		const_reverse_iterator;

	MAP::value_type		lhs(1, 2);

	PRINT_EXECUTE((key_type = -2147483648));
	PRINT_EXECUTE((mapped_type = 3.14));
	PRINT_EXECUTE((value_type.second = -867.1487));
	PRINT_EXECUTE((size_type = -1));
	PRINT_EXECUTE((difference_type = -2));
	_print_nl();
	
	PRINT_EXECUTE((key_compare(lhs.first, value_type.first)));
	PRINT_EXECUTE((key_compare(lhs.first, lhs.first)));
	PRINT_EXECUTE((key_compare(lhs.first, lhs.first + 1)));
	PRINT_EXECUTE((key_compare(lhs.first, reference.first)));
	PRINT_EXECUTE((key_compare(lhs.first, const_reference.first)));
	_print_nl();

	PRINT_EXECUTE((key_compare(value_type.first, value_type.first)));
	PRINT_EXECUTE((key_compare(value_type.first, value_type.first + 1)));
	PRINT_EXECUTE((key_compare(value_type.first, lhs.first)));
	PRINT_EXECUTE((key_compare(value_type.first, reference.first)));
	PRINT_EXECUTE((key_compare(value_type.first, const_reference.first)));
	_print_nl();

	PRINT_EXECUTE((key_compare(reference.first, reference.first)));
	PRINT_EXECUTE((key_compare(reference.first, reference.first + 1)));
	PRINT_EXECUTE((key_compare(reference.first, value_type.first)));
	PRINT_EXECUTE((key_compare(reference.first, lhs.first)));
	PRINT_EXECUTE((key_compare(reference.first, const_reference.first)));
	_print_nl();

	PRINT_EXECUTE((key_compare(const_reference.first, const_reference.first)));
	PRINT_EXECUTE((key_compare(const_reference.first, const_reference.first + 1)));
	PRINT_EXECUTE((key_compare(const_reference.first, value_type.first)));
	PRINT_EXECUTE((key_compare(const_reference.first, lhs.first)));
	PRINT_EXECUTE((key_compare(const_reference.first, reference.first)));
	_print_nl();

	PRINT_EXECUTE(allocator_type.max_size());
	_print_nl();

	PRINT_EXECUTE((value_type.second));
	PRINT_EXECUTE((reference.second = 1.186));
	PRINT_EXECUTE((value_type.second));
	PRINT_EXECUTE((const_reference.second));
	PRINT_EXECUTE((pointer->second = 17897.182));
	PRINT_EXECUTE((value_type.second));
	PRINT_EXECUTE((const_pointer->second));

	PRINT_EXECUTE((const_pointer->first == value_type.first));
	_print_nl();

	PRINT_EXECUTE((iterator = m.begin())->first);
	PRINT_EXECUTE(iterator->second);
	PRINT_EXECUTE((const_iterator = (++iterator))->first);
	PRINT_EXECUTE(const_iterator->second);
	_print_nl();

	PRINT_EXECUTE((reverse_iterator = m.rbegin())->first);
	PRINT_EXECUTE(reverse_iterator->second);
	PRINT_EXECUTE((const_reverse_iterator = (++reverse_iterator))->first);
	PRINT_EXECUTE(const_reverse_iterator->second);
	_print_nl();
}
