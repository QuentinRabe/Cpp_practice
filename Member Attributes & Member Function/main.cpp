/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:53:23 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 12:55:21 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.class.hpp"
#include <iostream>

int	main(void)
{
	Person	p1;

	p1.name = "Quentin Rabe";
	p1.age = 23;
	p1.greeting();
	std::cout << "I'm " << p1.name << " and I'm " << p1.age << " yo" << std::endl;
}
