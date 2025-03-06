/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wizard.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:40:11 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 13:03:14 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wizard.hpp"

//------------------------------------------------------------------------------
// Constructors & Destructors
//------------------------------------------------------------------------------
Wizard::Wizard( std::string wizardName ): name(wizardName) {
	std::cout << "[ Base class ] Default constructor called" << std::endl;
}

Wizard::Wizard( Wizard const& src) {
	std::cout << "[ Base class ] Copy constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Wizard::~Wizard( void ) {
	std::cout << "[ Base class ] Destructor called" << std::endl;
}

//------------------------------------------------------------------------------
// Operator overload
//------------------------------------------------------------------------------
std::ostream& operator<<( std::ostream& o, Wizard const& rhs ) {
	o << rhs.getName();
	return (o);
}

Wizard&	Wizard::operator=( Wizard const& rhs ) {
	this->setName(rhs.getName());
	return (*this);
}

//------------------------------------------------------------------------------
// Getters & Setters
//------------------------------------------------------------------------------
std::string	Wizard::getName( void ) const {
	return (this->name);
}

void	Wizard::setName( std::string const newName ) {
	this->name = newName;
}
