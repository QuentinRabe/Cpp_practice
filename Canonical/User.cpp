/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:09:46 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 12:31:23 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"
#include <iostream>

User::User( void ): _name("John Doe") {
	std::cout << "Default constructor is called !" << std::endl;
}

User::User( User const& src) {
	std::cout << "Copy constructor is called " << std::endl;
	*this = src;
}

User::User( std::string name ): _name(name) {
	std::cout << "Constructor with parameter is called !" << std::endl;
}

User&	User::operator=( User const& user) {
	std::cout << "Changing name from " << this->getName() << " to " << user.getName() << std::endl;
	this->_name = user.getName();
	return (*this);
}

User::~User( void ) {
	std::cout << "Destructor is called !" << std::endl;
}

std::string	User::getName( void ) const {
	return (this->_name);
}

std::ostream&	operator<<( std::ostream& o, User const& user ) {
	o << user.getName();
	return (o);
}
