/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wizard.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:32:31 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 12:42:56 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIZARD_HPP
# define WIZARD_HPP

# include <string>
# include <iostream>

class	Wizard {
	public:
		Wizard( std::string	wizardName );
		Wizard( Wizard const& src );
		Wizard&	operator=( Wizard const& rhs );
		~Wizard( void );
		std::string	getName( void ) const;
		void	setName( std::string const newName );

	protected:
		std::string	name;
};

std::ostream& operator<<( std::ostream& o, Wizard const& rhs );

#endif
