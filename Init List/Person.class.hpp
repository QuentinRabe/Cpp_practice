/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:13:46 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 13:17:42 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_CLASS_HPP
# define PERSON_CLASS_HPP

# include <string>

class	Person
{
	public:
		std::string	firstName;
		std::string	lastName;
		int			age;
		char		gender;

		Person(std::string p1, std::string p2, int p3, char p4);
		~Person(void);

		void	greeting(void);
};
#endif
