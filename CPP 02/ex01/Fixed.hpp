/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:57:31 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 21:15:12 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 #define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int					integer;
	static const int	fractional_bits = 8;
public:
	Fixed ();
	Fixed ( int integer );
	Fixed ( float float_number );
	Fixed ( const Fixed &copy );
	~Fixed ();
	Fixed	&operator=( const Fixed& copy );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& os, const Fixed& copy );

#endif