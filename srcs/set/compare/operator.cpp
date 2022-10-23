/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:34:35 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/23 18:08:59 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#define SIZE_M1 17
#define SIZE_M2 0
#define SIZE_M3 14000
#define SIZE_M4 18
#define SIZE_M5 17
#define SIZE_M6 17

typedef NAMESPACE::set<int>	SET;

int	main	(void)
{
	SET		m1, m2, m3, m4, m5, m6;

	for (int i = 0; i < SIZE_M1; ++i)
		m1.insert(i);
	for (int i = 0; i < SIZE_M2; ++i)
		m2.insert(i);
	for (int i = 0; i < SIZE_M3; ++i)
		m3.insert(i);
	for (int i = 0; i < SIZE_M4; ++i)
		m4.insert(i);
	for (int i = 0; i < SIZE_M5; ++i)
		m5.insert(-1 - i);
	for (int i = 0; i < SIZE_M6; ++i)
		m6.insert(i);

	PRINT_EXECUTE(m1 == m1);
	PRINT_EXECUTE(m1 != m1);
	PRINT_EXECUTE(m1 <  m1);
	PRINT_EXECUTE(m1 <= m1);
	PRINT_EXECUTE(m1 >  m1);
	PRINT_EXECUTE(m1 >= m1);
	_print_nl();

	PRINT_EXECUTE(m1 == m2);
	PRINT_EXECUTE(m1 != m2);
	PRINT_EXECUTE(m1 <  m2);
	PRINT_EXECUTE(m1 <= m2);
	PRINT_EXECUTE(m1 >  m2);
	PRINT_EXECUTE(m1 >= m2);
	_print_nl();

	PRINT_EXECUTE(m1 == m3);
	PRINT_EXECUTE(m1 != m3);
	PRINT_EXECUTE(m1 <  m3);
	PRINT_EXECUTE(m1 <= m3);
	PRINT_EXECUTE(m1 >  m3);
	PRINT_EXECUTE(m1 >= m3);
	_print_nl();

	PRINT_EXECUTE(m1 == m4);
	PRINT_EXECUTE(m1 != m4);
	PRINT_EXECUTE(m1 <  m4);
	PRINT_EXECUTE(m1 <= m4);
	PRINT_EXECUTE(m1 >  m4);
	PRINT_EXECUTE(m1 >= m4);
	_print_nl();

	PRINT_EXECUTE(m1 == m5);
	PRINT_EXECUTE(m1 != m5);
	PRINT_EXECUTE(m1 <  m5);
	PRINT_EXECUTE(m1 <= m5);
	PRINT_EXECUTE(m1 >  m5);
	PRINT_EXECUTE(m1 >= m5);
	_print_nl();

	PRINT_EXECUTE(m1 == m6);
	PRINT_EXECUTE(m1 != m6);
	PRINT_EXECUTE(m1 <  m6);
	PRINT_EXECUTE(m1 <= m6);
	PRINT_EXECUTE(m1 >  m6);
	PRINT_EXECUTE(m1 >= m6);
	_print_nl();


	PRINT_EXECUTE(m2 == m1);
	PRINT_EXECUTE(m2 != m1);
	PRINT_EXECUTE(m2 <  m1);
	PRINT_EXECUTE(m2 <= m1);
	PRINT_EXECUTE(m2 >  m1);
	PRINT_EXECUTE(m2 >= m1);
	_print_nl();

	PRINT_EXECUTE(m2 == m2);
	PRINT_EXECUTE(m2 != m2);
	PRINT_EXECUTE(m2 <  m2);
	PRINT_EXECUTE(m2 <= m2);
	PRINT_EXECUTE(m2 >  m2);
	PRINT_EXECUTE(m2 >= m2);
	_print_nl();

	PRINT_EXECUTE(m2 == m3);
	PRINT_EXECUTE(m2 != m3);
	PRINT_EXECUTE(m2 <  m3);
	PRINT_EXECUTE(m2 <= m3);
	PRINT_EXECUTE(m2 >  m3);
	PRINT_EXECUTE(m2 >= m3);
	_print_nl();

	PRINT_EXECUTE(m2 == m4);
	PRINT_EXECUTE(m2 != m4);
	PRINT_EXECUTE(m2 <  m4);
	PRINT_EXECUTE(m2 <= m4);
	PRINT_EXECUTE(m2 >  m4);
	PRINT_EXECUTE(m2 >= m4);
	_print_nl();

	PRINT_EXECUTE(m2 == m5);
	PRINT_EXECUTE(m2 != m5);
	PRINT_EXECUTE(m2 <  m5);
	PRINT_EXECUTE(m2 <= m5);
	PRINT_EXECUTE(m2 >  m5);
	PRINT_EXECUTE(m2 >= m5);
	_print_nl();

	PRINT_EXECUTE(m2 == m6);
	PRINT_EXECUTE(m2 != m6);
	PRINT_EXECUTE(m2 <  m6);
	PRINT_EXECUTE(m2 <= m6);
	PRINT_EXECUTE(m2 >  m6);
	PRINT_EXECUTE(m2 >= m6);
	_print_nl();


	PRINT_EXECUTE(m3 == m1);
	PRINT_EXECUTE(m3 != m1);
	PRINT_EXECUTE(m3 <  m1);
	PRINT_EXECUTE(m3 <= m1);
	PRINT_EXECUTE(m3 >  m1);
	PRINT_EXECUTE(m3 >= m1);
	_print_nl();

	PRINT_EXECUTE(m3 == m2);
	PRINT_EXECUTE(m3 != m2);
	PRINT_EXECUTE(m3 <  m2);
	PRINT_EXECUTE(m3 <= m2);
	PRINT_EXECUTE(m3 >  m2);
	PRINT_EXECUTE(m3 >= m2);
	_print_nl();

	PRINT_EXECUTE(m3 == m3);
	PRINT_EXECUTE(m3 != m3);
	PRINT_EXECUTE(m3 <  m3);
	PRINT_EXECUTE(m3 <= m3);
	PRINT_EXECUTE(m3 >  m3);
	PRINT_EXECUTE(m3 >= m3);
	_print_nl();

	PRINT_EXECUTE(m3 == m4);
	PRINT_EXECUTE(m3 != m4);
	PRINT_EXECUTE(m3 <  m4);
	PRINT_EXECUTE(m3 <= m4);
	PRINT_EXECUTE(m3 >  m4);
	PRINT_EXECUTE(m3 >= m4);
	_print_nl();

	PRINT_EXECUTE(m3 == m5);
	PRINT_EXECUTE(m3 != m5);
	PRINT_EXECUTE(m3 <  m5);
	PRINT_EXECUTE(m3 <= m5);
	PRINT_EXECUTE(m3 >  m5);
	PRINT_EXECUTE(m3 >= m5);
	_print_nl();

	PRINT_EXECUTE(m3 == m6);
	PRINT_EXECUTE(m3 != m6);
	PRINT_EXECUTE(m3 <  m6);
	PRINT_EXECUTE(m3 <= m6);
	PRINT_EXECUTE(m3 >  m6);
	PRINT_EXECUTE(m3 >= m6);
	_print_nl();


	PRINT_EXECUTE(m4 == m1);
	PRINT_EXECUTE(m4 != m1);
	PRINT_EXECUTE(m4 <  m1);
	PRINT_EXECUTE(m4 <= m1);
	PRINT_EXECUTE(m4 >  m1);
	PRINT_EXECUTE(m4 >= m1);
	_print_nl();

	PRINT_EXECUTE(m4 == m2);
	PRINT_EXECUTE(m4 != m2);
	PRINT_EXECUTE(m4 <  m2);
	PRINT_EXECUTE(m4 <= m2);
	PRINT_EXECUTE(m4 >  m2);
	PRINT_EXECUTE(m4 >= m2);
	_print_nl();

	PRINT_EXECUTE(m4 == m3);
	PRINT_EXECUTE(m4 != m3);
	PRINT_EXECUTE(m4 <  m3);
	PRINT_EXECUTE(m4 <= m3);
	PRINT_EXECUTE(m4 >  m3);
	PRINT_EXECUTE(m4 >= m3);
	_print_nl();

	PRINT_EXECUTE(m4 == m4);
	PRINT_EXECUTE(m4 != m4);
	PRINT_EXECUTE(m4 <  m4);
	PRINT_EXECUTE(m4 <= m4);
	PRINT_EXECUTE(m4 >  m4);
	PRINT_EXECUTE(m4 >= m4);
	_print_nl();

	PRINT_EXECUTE(m4 == m5);
	PRINT_EXECUTE(m4 != m5);
	PRINT_EXECUTE(m4 <  m5);
	PRINT_EXECUTE(m4 <= m5);
	PRINT_EXECUTE(m4 >  m5);
	PRINT_EXECUTE(m4 >= m5);
	_print_nl();

	PRINT_EXECUTE(m4 == m6);
	PRINT_EXECUTE(m4 != m6);
	PRINT_EXECUTE(m4 <  m6);
	PRINT_EXECUTE(m4 <= m6);
	PRINT_EXECUTE(m4 >  m6);
	PRINT_EXECUTE(m4 >= m6);
	_print_nl();


	PRINT_EXECUTE(m5 == m1);
	PRINT_EXECUTE(m5 != m1);
	PRINT_EXECUTE(m5 <  m1);
	PRINT_EXECUTE(m5 <= m1);
	PRINT_EXECUTE(m5 >  m1);
	PRINT_EXECUTE(m5 >= m1);
	_print_nl();

	PRINT_EXECUTE(m5 == m2);
	PRINT_EXECUTE(m5 != m2);
	PRINT_EXECUTE(m5 <  m2);
	PRINT_EXECUTE(m5 <= m2);
	PRINT_EXECUTE(m5 >  m2);
	PRINT_EXECUTE(m5 >= m2);
	_print_nl();

	PRINT_EXECUTE(m5 == m3);
	PRINT_EXECUTE(m5 != m3);
	PRINT_EXECUTE(m5 <  m3);
	PRINT_EXECUTE(m5 <= m3);
	PRINT_EXECUTE(m5 >  m3);
	PRINT_EXECUTE(m5 >= m3);
	_print_nl();

	PRINT_EXECUTE(m5 == m4);
	PRINT_EXECUTE(m5 != m4);
	PRINT_EXECUTE(m5 <  m4);
	PRINT_EXECUTE(m5 <= m4);
	PRINT_EXECUTE(m5 >  m4);
	PRINT_EXECUTE(m5 >= m4);
	_print_nl();

	PRINT_EXECUTE(m5 == m5);
	PRINT_EXECUTE(m5 != m5);
	PRINT_EXECUTE(m5 <  m5);
	PRINT_EXECUTE(m5 <= m5);
	PRINT_EXECUTE(m5 >  m5);
	PRINT_EXECUTE(m5 >= m5);
	_print_nl();

	PRINT_EXECUTE(m5 == m6);
	PRINT_EXECUTE(m5 != m6);
	PRINT_EXECUTE(m5 <  m6);
	PRINT_EXECUTE(m5 <= m6);
	PRINT_EXECUTE(m5 >  m6);
	PRINT_EXECUTE(m5 >= m6);
	_print_nl();


	PRINT_EXECUTE(m6 == m1);
	PRINT_EXECUTE(m6 != m1);
	PRINT_EXECUTE(m6 <  m1);
	PRINT_EXECUTE(m6 <= m1);
	PRINT_EXECUTE(m6 >  m1);
	PRINT_EXECUTE(m6 >= m1);
	_print_nl();

	PRINT_EXECUTE(m6 == m2);
	PRINT_EXECUTE(m6 != m2);
	PRINT_EXECUTE(m6 <  m2);
	PRINT_EXECUTE(m6 <= m2);
	PRINT_EXECUTE(m6 >  m2);
	PRINT_EXECUTE(m6 >= m2);
	_print_nl();

	PRINT_EXECUTE(m6 == m3);
	PRINT_EXECUTE(m6 != m3);
	PRINT_EXECUTE(m6 <  m3);
	PRINT_EXECUTE(m6 <= m3);
	PRINT_EXECUTE(m6 >  m3);
	PRINT_EXECUTE(m6 >= m3);
	_print_nl();

	PRINT_EXECUTE(m6 == m4);
	PRINT_EXECUTE(m6 != m4);
	PRINT_EXECUTE(m6 <  m4);
	PRINT_EXECUTE(m6 <= m4);
	PRINT_EXECUTE(m6 >  m4);
	PRINT_EXECUTE(m6 >= m4);
	_print_nl();

	PRINT_EXECUTE(m6 == m5);
	PRINT_EXECUTE(m6 != m5);
	PRINT_EXECUTE(m6 <  m5);
	PRINT_EXECUTE(m6 <= m5);
	PRINT_EXECUTE(m6 >  m5);
	PRINT_EXECUTE(m6 >= m5);
	_print_nl();

	PRINT_EXECUTE(m6 == m6);
	PRINT_EXECUTE(m6 != m6);
	PRINT_EXECUTE(m6 <  m6);
	PRINT_EXECUTE(m6 <= m6);
	PRINT_EXECUTE(m6 >  m6);
	PRINT_EXECUTE(m6 >= m6);
	_print_nl();
}
