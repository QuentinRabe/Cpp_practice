/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:30:26 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 10:43:59 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"
#include <iostream>

Integer::Integer( int n ): _n(n) {
	std::cout << "Constructor is called for integer (" << this->_n << ")" << std::endl;
}

Integer::~Integer( void ) {
	std::cout << "Destructor is called for integer (" << this->_n << ")" << std::endl;
}

int	Integer::getValue( void ) const {
	return (this->_n);
}

Integer&	Integer::operator=( Integer const& right) {
	std::cout << "Assignation operator from " << this->getValue() << " to " << right.getValue() << std::endl;
	this->_n = right.getValue();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Integer const& right) {
	o << right.getValue();
	return (o);
}
