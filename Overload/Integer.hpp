/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:28:51 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 11:47:11 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>

class	Integer {
	public:
		Integer( int n );
		~Integer( void );
		int	getValue( void ) const;
		Integer&	operator=( Integer const& right );
		Integer	operator+( Integer const& right);
	private:
		int	_n;
};

std::ostream&	operator<<(std::ostream& o, Integer const& right);

#endif
