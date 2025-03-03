/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:32:35 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 10:48:38 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"
#include <iostream>

int	main( void ) {
	Integer	x(21);
	Integer	y(42);
	Integer	z(0);

	std::cout << "Value of x = " << x << std::endl;
	std::cout << "Value of y = " << y << std::endl;
	std::cout << "Value of z = " << z << std::endl;
	y = z = x = Integer(42);
	std::cout << "Value of x = " << x << std::endl;
	std::cout << "Value of y = " << y << std::endl;
	std::cout << "Value of z = " << z << std::endl;
	return (0);
}
