/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:23:10 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 13:31:32 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.class.hpp"

int	main(void)
{
	Person	*p1 = new Person("Katerina", "Petrova", 35, 'F');

	p1->greeting();
	return (0);
}
