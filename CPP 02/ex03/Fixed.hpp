/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:57:31 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 09:36:11 by ahkiler          ###   ########.fr       */
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
	Fixed( int integer );
	Fixed( float float_number );
	Fixed( const Fixed &copy );
	Fixed& operator=( const Fixed& copy );
	int operator>( const Fixed& copy ) const;
	int operator<( const Fixed& copy ) const;
	int operator>=( const Fixed& copy ) const;
	int operator<=( const Fixed& copy ) const;
	int operator==( const Fixed& copy ) const;
	int operator!=( const Fixed& copy ) const;
	Fixed operator+( const Fixed& copy );
	Fixed operator-( const Fixed& copy );
	Fixed operator*( const Fixed& copy );
	Fixed operator/( const Fixed& copy );
	Fixed& operator++( void );
	Fixed& operator--( void );
	const Fixed operator++( int );
	const Fixed operator--( int );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static const Fixed& min( const Fixed &copy_1, const Fixed &copy_2 );
	static Fixed& min( Fixed &copy_1, Fixed &copy_2 );
	static const Fixed& max( const Fixed &copy_1, const Fixed &copy_2 );
	static Fixed& max( Fixed &copy_1, Fixed &copy_2 );
	~Fixed();
};

std::ostream& operator<<( std::ostream& os, const Fixed& copy );

#endif