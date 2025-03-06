/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:04:49 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 12:24:33 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_HPP
# define USER_HPP

#include <string>
#include <iostream>

class	User {
	public:
		User( void );
		User( User const& src );
		User( std::string name );
		~User( void );
		User&	operator=( User const& user );

		std::string	getName( void ) const;
	private:
		std::string	_name;
};

std::ostream&	operator<<( std::ostream& o, User const& user );

#endif
