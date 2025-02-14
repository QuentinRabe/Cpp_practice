/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:51:45 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 13:57:51 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(const float f) :
pi(f) {}

Sample::~Sample(void) {}

void	Sample::foo(void) const
{
	std::cout << "This is pi = " << this->pi << std::endl;
}
