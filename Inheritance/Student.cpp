/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:01:17 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 13:09:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
Student::Student( std::string studentName ) : Wizard::Wizard( studentName ) {
	std::cout << "[ Derived class ] Default constructor called" << std::endl;
}

Student::Student( Student const& src ) : Wizard::Wizard( src ) {
	std::cout << "[ Derived class ] Copy constructor called" << std::endl;
}

Student::~Student( void ) {
	std::cout << "[ Derived class ] Destructor called" << std::endl;
}
