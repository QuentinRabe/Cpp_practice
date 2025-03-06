/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:08:46 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 12:30:36 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"
#include <iostream>

int	main( void ) {
	User	bob;

	std::cout << "Username = " << bob << std::endl;
	bob = User("Quentin");
	std::cout << "Username = " << bob << std::endl;
}
