/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:53:45 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/06 13:00:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

# include "Wizard.hpp"

class	Student : public Wizard {
	public:
		Student( std::string studentName );
		Student( Student const& src );
		~Student ( void );
};

#endif
