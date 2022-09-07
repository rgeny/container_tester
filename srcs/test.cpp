/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:01:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/05/17 12:20:56 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <vector.hpp>

#ifndef NAMESPACE
# define NAMESPACE ft
#endif

int	main	(void)
{
	std::vector<int>	test(10, 20);
	std::cout << test.size() << std::endl;

	return (0);
}
