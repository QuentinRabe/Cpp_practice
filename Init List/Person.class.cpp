/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:17:53 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 13:22:59 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.class.hpp"
#include <iostream>

Person::Person(std::string p1, std::string p2, int p3, char p4) :
firstName(p1), lastName(p2), age(p3), gender(p4) {}

void	Person::greeting(void)
{
	std::string	fullGender;

	if (this->gender == 'F')
		fullGender = "woman";
	else
		fullGender = "man";
	std::cout << "Hello! I'm " << this->firstName << " " << this->lastName \
<< ". I'm a " << this->age << " yo " << fullGender << std::endl;
}
