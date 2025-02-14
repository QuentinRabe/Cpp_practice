/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stdiostream.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:03:38 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 11:06:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[1024];

	std::cout << "Hello world" << std::endl;
	std::cout << "Tape something: ";
	std::cin >> buff;
	std::cout << "You entered [" << buff << "]" << std::endl;
	return (0);
}
