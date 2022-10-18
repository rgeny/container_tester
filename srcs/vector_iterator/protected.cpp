/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protected.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:47:29 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 18:47:40 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

#define SIZE 10

class TestVectorIterator
	:public NAMESPACE::vector<int>::iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::iterator		iterator;

		TestVectorIterator	(iterator & it)
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

class ConstTestVectorIterator
	:public NAMESPACE::vector<int>::const_iterator
{
	public:
		typedef NAMESPACE::vector<int>	VECTOR;
		typedef VECTOR::const_iterator		const_iterator;

		ConstTestVectorIterator	(const_iterator & it)
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
		TestVectorIterator		test_it(it);
		ConstTestVectorIterator	test_cit(cit);

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
