/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:52:12 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/20 13:57:32 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int	main(void)
{
	short	i = 1;
	std::string str = std::to_string(i);
	std::cout << str.erase(0, str.find_first_not_of(" ")) << std::endl;
	return (0);
}
