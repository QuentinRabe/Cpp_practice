/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:49:26 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 12:51:50 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_CLASS_HPP
# define PERSON_CLASS_HPP
# include <string>

class	Person
{
	public:
		std::string	name;
		int			age;

		void	greeting(void);
};
#endif
