/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator[]_out_of_size.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:16:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/03 10:17:04 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int	main	(void)
{
	NAMESPACE::vector<int>	v(10);

	TRY_CATCH
	(
		std::cout	<< v[10]
					<< std::endl;
	)
}
