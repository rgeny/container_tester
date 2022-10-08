/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:34:31 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/08 15:38:08 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_reverse_iterator.hpp"

#define SIZE 10

typedef NAMESPACE::vector<std::string>		VECTOR;
typedef NAMESPACE::map<std::string, int>	MAP;

template < typename RIterator >
void	_test_vector	(RIterator rit,
						 size_t n)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(*rit);
		PRINT_EXECUTE(rit->size());
		PRINT_EXECUTE(rit[n]);
	)
}

template < typename RIterator >
void	_test_map	(RIterator rit,
						 size_t n)
{
	TRY_CATCH
	(
		PRINT_EXECUTE(*rit);
		PRINT_EXECUTE(rit->first.size());
//		PRINT_EXECUTE(rit[n]);
	)
}

int	main	(void)
{
	_print_nl("test with vector");
	{
		VECTOR							v;
		VECTOR::reverse_iterator		rit;
		VECTOR::const_reverse_iterator	crit;
		std::string	str("abc");

		for (size_t i = 0; i < SIZE; i++)
		{
			v.push_back(str);
			for (size_t j = 0; j < str.size(); j++)
				++str[j];
		}

		for (size_t i = 0; i < SIZE / 2; i++)
		{
			rit = v.rbegin() + i;
			crit= v.rbegin() + i;
			_test_vector(rit, i);
			_test_vector(crit, i);
		}
	}
	_print_nl();
	_print_nl("test with map");
	{
		MAP							m;
		MAP::reverse_iterator		rit;
		MAP::const_reverse_iterator	crit;
		std::string	str("abc");

		for (size_t i = 0; i < SIZE; i++)
		{
			m[str] = i;
			for (size_t j = 0; j < str.size(); j++)
				++str[j];
		}

		for (size_t i = 0; i < SIZE / 2; ++i)
		{
			rit = m.rbegin();
			crit= m.rbegin();
			for (size_t j = 0; j < i; ++j)
			{
				++rit;
				++crit;
			}
			_test_map(rit, i);
			_test_map(crit, i);
		}
	}
}
