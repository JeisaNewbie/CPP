/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:57:31 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/20 22:04:35 by ahkiler          ###   ########.fr       */
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
	Fixed();
	Fixed( const Fixed &copy );
	Fixed& operator=( const Fixed& copy );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed();
};

#endif