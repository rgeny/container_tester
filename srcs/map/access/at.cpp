/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:00:03 by rgeny             #+#    #+#             */
/*   Updated: 2022/10/18 16:22:20 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#define SIZE 7

typedef NAMESPACE::map<size_t, float>	MAP;

template < typename Container >
void	Test<Container>::test	(void)
{
	typename Container::mapped_type &	value = this->at(SIZE / 2);

	PRINT_EXECUTE(value);
	PRINT_EXECUTE( (&value == &this->at(SIZE / 2)) );
	PRINT_EXECUTE( (value = 9.7) );

	for (size_t i = 0; i <= SIZE; ++i)
	{
		TRY_CATCH
		(
			std::cout	<< "(i == "
						<< i
						<< ")";
			PRINT_EXECUTE(this->at(i));
		)
	}
}
template < typename Container >
void	Test<Container>::const_test	(void) const
{
	typename Container::mapped_type const &	value = this->at(SIZE / 2);

	PRINT_EXECUTE(value);
	PRINT_EXECUTE( (&value == &this->at(SIZE / 2)) );

	for (size_t i = 0; i <= SIZE; ++i)
	{
		TRY_CATCH
		(
			std::cout	<< "(i == "
						<< i
						<< ")";
			PRINT_EXECUTE(this->at(i));
		)
	}
}

int	main	(void)
{
	Test<MAP>	m;
	float		second = 7.3;
	
	for (size_t i = 0; i < SIZE; ++i, second *= ((float)i + 1))
		m[i] = second;
	
	m.test();
	m.const_test();
}
