/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protected.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:47:29 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 13:55:16 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 10

class Test
	:public NAMESPACE::vector<int>::iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::iterator		iterator;

		Test	(iterator & it)
			:iterator(it)
		{	}

		void	test	(void)
		{
			PRINT_EXECUTE(*this->_M_current);
			PRINT_EXECUTE(typeid (iterator::__traits_type::difference_type).name());
			PRINT_EXECUTE(typeid (iterator::__traits_type::value_type).name());
			PRINT_EXECUTE(typeid (iterator::__traits_type::pointer).name());
			PRINT_EXECUTE(typeid (iterator::__traits_type::reference).name());
			PRINT_EXECUTE(typeid (iterator::__traits_type::iterator_category).name());
			_print_nl("");
		}
};

class ConstTest
	:public NAMESPACE::vector<int>::const_iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::const_iterator		const_iterator;

		ConstTest	(const_iterator & it)
			:const_iterator(it)
		{	}

		void	test	(void)
		{
			PRINT_EXECUTE(*this->_M_current);
			PRINT_EXECUTE(typeid (const_iterator::__traits_type::difference_type).name());
			PRINT_EXECUTE(typeid (const_iterator::__traits_type::value_type).name());
			PRINT_EXECUTE(typeid (const_iterator::__traits_type::pointer).name());
			PRINT_EXECUTE(typeid (const_iterator::__traits_type::reference).name());
			PRINT_EXECUTE(typeid (const_iterator::__traits_type::iterator_category).name());
			_print_nl("");
		}
};

template
<
	typename Iterator,
	typename ConstIterator
>
static void	_test	(Iterator it,
					 ConstIterator cit)
{
	TRY_CATCH
	(
		Test		test_it(it);
		ConstTest	test_cit(cit);

		test_it.test();
		test_cit.test();
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>					v;
	NAMESPACE::vector<int>::iterator		it;
	NAMESPACE::vector<int>::const_iterator	cit;

	for (int i = 0; i < SIZE; i++)
		v.push_back(1 + i - i * i);
	
	for (size_t i = 0; i < SIZE; i++)
	{
		it = v.begin() + i;
		cit= v.begin() + i;
		_test(it, cit);
	}
}
