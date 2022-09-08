/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:47:53 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 16:43:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

template
<
	typename Iterator,
	typename ConstIterator
>
static void	_test	(Iterator src_it,
					 ConstIterator src_cit)
{
	Iterator		cpy_assign,
					cpy_construct(src_it),
					cpy_parameter(src_it.base());
	ConstIterator	cpy_cassign,
					cpy_cconstruct(src_cit),
					cpy_cparameter(src_cit.base());
	
	cpy_assign = src_it;
	cpy_cassign = src_cit;
	TRY_CATCH
	(
		PRINT_EXECUTE(src_it == cpy_assign);
		PRINT_EXECUTE(cpy_assign == cpy_construct);
		PRINT_EXECUTE(cpy_construct == cpy_parameter);
		PRINT_EXECUTE(cpy_parameter == src_cit);
		PRINT_EXECUTE(src_cit == cpy_cassign);
		PRINT_EXECUTE(cpy_cassign == cpy_cconstruct);
		PRINT_EXECUTE(cpy_cconstruct == cpy_cparameter);
		PRINT_EXECUTE(cpy_cparameter == src_it);

		PRINT_EXECUTE(*src_it == *cpy_assign);
		PRINT_EXECUTE(*cpy_assign == *cpy_construct);
		PRINT_EXECUTE(*cpy_construct == *cpy_parameter);
		PRINT_EXECUTE(*cpy_parameter == *src_cit);
		PRINT_EXECUTE(*src_cit == *cpy_cassign);
		PRINT_EXECUTE(*cpy_cassign == *cpy_cconstruct);
		PRINT_EXECUTE(*cpy_cconstruct == *cpy_cparameter);
		PRINT_EXECUTE(*cpy_cparameter == *src_it);

		PRINT_EXECUTE(src_it++ == cpy_assign);
		PRINT_EXECUTE(cpy_assign++ == cpy_construct);
		PRINT_EXECUTE(cpy_construct++ == cpy_parameter);
		PRINT_EXECUTE(cpy_parameter++ == src_cit);
		PRINT_EXECUTE(src_cit++ == cpy_cassign);
		PRINT_EXECUTE(cpy_cassign++ == cpy_cconstruct);
		PRINT_EXECUTE(cpy_cconstruct++ == cpy_cparameter);
		PRINT_EXECUTE(cpy_cparameter++ == src_it);

		PRINT_EXECUTE(*src_it++ == *cpy_assign);
		PRINT_EXECUTE(*cpy_assign++ == *cpy_construct);
		PRINT_EXECUTE(*cpy_construct++ == *cpy_parameter);
		PRINT_EXECUTE(*cpy_parameter++ == *src_cit);
		PRINT_EXECUTE(*src_cit++ == *cpy_cassign);
		PRINT_EXECUTE(*cpy_cassign++ == *cpy_cconstruct);
		PRINT_EXECUTE(*cpy_cconstruct++ == *cpy_cparameter);
		PRINT_EXECUTE(*cpy_cparameter++ == *src_it);

		PRINT_EXECUTE(++src_it == cpy_assign);
		PRINT_EXECUTE(++cpy_assign == cpy_construct);
		PRINT_EXECUTE(++cpy_construct == cpy_parameter);
		PRINT_EXECUTE(++cpy_parameter == src_cit);
		PRINT_EXECUTE(++src_cit == cpy_cassign);
		PRINT_EXECUTE(++cpy_cassign == cpy_cconstruct);
		PRINT_EXECUTE(++cpy_cconstruct == cpy_cparameter);
		PRINT_EXECUTE(++cpy_cparameter == src_it);

		PRINT_EXECUTE(*(++src_it) == *cpy_assign);
		PRINT_EXECUTE(*(++cpy_assign) == *cpy_construct);
		PRINT_EXECUTE(*(++cpy_construct) == *cpy_parameter);
		PRINT_EXECUTE(*(++cpy_parameter) == *src_cit);
		PRINT_EXECUTE(*(++src_cit) == *cpy_cassign);
		PRINT_EXECUTE(*(++cpy_cassign) == *cpy_cconstruct);
		PRINT_EXECUTE(*(++cpy_cconstruct) == *cpy_cparameter);
		PRINT_EXECUTE(*(++cpy_cparameter) == *src_it);
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>			v_int;
	NAMESPACE::vector<std::string>	v_str;
	std::string	str("ab");

	for (int i = 0; i < 25; i++)
	{
		v_int.push_back(i);
		v_str.push_back(str);
		for (size_t j = 0; j < str.size(); j++)
			str[j]++;
	}
	
	NAMESPACE::vector<int>::iterator				vit;
	NAMESPACE::vector<int>::const_iterator			const_vit;
	NAMESPACE::vector<std::string>::iterator		strit;
	NAMESPACE::vector<std::string>::const_iterator	const_strit;

	vit			= v_int.begin();
	const_vit	= v_int.begin();
	_test(vit, const_vit);
	vit			= v_int.begin() + v_int.size() / 2;
	const_vit	= v_int.begin() + v_int.size() / 2;
	_test(vit, const_vit);
	vit			= v_int.end() - 5;
	const_vit	= v_int.end() - 5;
	_test(vit, const_vit);

	strit			= v_str.begin();
	const_strit	= v_str.begin();
	_test(strit, const_strit);
	strit			= v_str.begin() + v_str.size() / 2;
	const_strit	= v_str.begin() + v_str.size() / 2;
	_test(strit, const_strit);
	strit			= v_str.end() - 5;
	const_strit	= v_str.end() - 5;
	_test(strit, const_strit);

	return (0);
}
