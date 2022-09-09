/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protected.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:30:25 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/09 17:10:22 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 11
class Test
	:public NAMESPACE::vector<int>::reverse_iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::reverse_iterator	reverse_iterator;

		Test	(reverse_iterator & it)
			:reverse_iterator(it)
		{	}

		void	test	(void)
		{
			PRINT_EXECUTE(*(this->current - 1));
			PRINT_EXECUTE(typeid (reverse_iterator::__traits_type::difference_type).name());
			PRINT_EXECUTE(typeid (reverse_iterator::__traits_type::value_type).name());
			PRINT_EXECUTE(typeid (reverse_iterator::__traits_type::pointer).name());
			PRINT_EXECUTE(typeid (reverse_iterator::__traits_type::reference).name());
			PRINT_EXECUTE(typeid (reverse_iterator::__traits_type::iterator_category).name());
			_print_nl("");
		}
};

class ConstTest
	:public NAMESPACE::vector<int>::const_reverse_iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::const_reverse_iterator	const_reverse_iterator;

		ConstTest	(const_reverse_iterator & cit)
			:const_reverse_iterator(cit)
		{	}

		void	test	(void)
		{
			PRINT_EXECUTE(*(this->current - 1));
			PRINT_EXECUTE(typeid (const_reverse_iterator::__traits_type::difference_type).name());
			PRINT_EXECUTE(typeid (const_reverse_iterator::__traits_type::value_type).name());
			PRINT_EXECUTE(typeid (const_reverse_iterator::__traits_type::pointer).name());
			PRINT_EXECUTE(typeid (const_reverse_iterator::__traits_type::reference).name());
			PRINT_EXECUTE(typeid (const_reverse_iterator::__traits_type::iterator_category).name());
			_print_nl("");
		}
};

template
<
	typename RIterator,
	typename ConstRIterator
>
static void	_test	(RIterator & rit,
					 ConstRIterator & crit)
{
	TRY_CATCH
	(
		Test		test_rit(rit);
		ConstTest	test_crit(crit);

		test_rit.test();
		test_crit.test();
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>							v;
	NAMESPACE::vector<int>::reverse_iterator		rit;
	NAMESPACE::vector<int>::const_reverse_iterator	crit;

	v.reserve(SIZE);
	for (int i = 0; i < SIZE; i++)
		v.push_back(i * SIZE);

	for (size_t i = 0; i < 1; i++)
	{
		rit = v.rbegin() + i;
		crit= v.rbegin() + i;

		_test(rit, crit);
	}
}
