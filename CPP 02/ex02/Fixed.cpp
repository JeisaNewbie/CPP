/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:59:12 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/22 09:49:13 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer (0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed( const Fixed &copy ) // : integer (copy.integer) 같은 클래스의 private 멤버는 접근 가능
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = copy;
	// this->integer = copy.getRawBits ();
}

Fixed::Fixed( int integer )
{
	std::cout<<"Int constructor called"<<std::endl;
	this->integer = integer << this->fractional_bits;
}

Fixed::Fixed( float float_number )
{
	std::cout<<"Float constructor called"<<std::endl;
	this->integer = roundf (float_number * 256);
}

Fixed& Fixed::operator=( const Fixed& copy )
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->integer = copy.getRawBits (); //integer = copy.integer; 마찬가지로 가능
	return (*this);
}

int Fixed::operator>( const Fixed& copy ) const
{
	return (this->integer > copy.getRawBits ());
}

int Fixed::operator<( const Fixed& copy ) const
{
	return (this->integer < copy.getRawBits ());
}

int Fixed::operator>=( const Fixed& copy ) const
{
	return (this->integer >= copy.getRawBits ());
}

int Fixed::operator<=( const Fixed& copy ) const
{
	return (this->integer <= copy.getRawBits ());
}

int Fixed::operator==( const Fixed& copy ) const
{
	return (this->integer == copy.getRawBits ());
}

int Fixed::operator!=( const Fixed& copy ) const
{
	return (this->integer != copy.getRawBits ());
}

Fixed Fixed::operator+( const Fixed& copy )
{
	Fixed tmp (this->integer + copy.getRawBits ());
	return (tmp);
}

Fixed Fixed::operator-( const Fixed& copy )
{
	Fixed tmp (this->integer - copy.getRawBits ());
	return (tmp);
}

Fixed Fixed::operator*( const Fixed& copy )
{
	Fixed tmp (this->toFloat() * copy.toFloat ());
	return (tmp);
}

Fixed Fixed::operator/( const Fixed& copy )
{
	Fixed tmp (this->toFloat () / copy.toFloat ());
	return (tmp);
}

std::ostream& operator<<( std::ostream& os, const Fixed& copy )
{
	os<<copy.toFloat ();
	return (os);
}

Fixed& Fixed::operator++( void )
{
	integer += 1;
	return (*this);
}

Fixed& Fixed::operator--( void )
{
	integer -= 1;
	return (*this);
}

const Fixed Fixed::operator++( int )
{
	const Fixed tmp (*this);
	integer += 1;
	return  (tmp);
}

const Fixed Fixed::operator--( int )
{
	const Fixed tmp (*this);
	integer -= 1;
	return  (tmp);
}

int Fixed::getRawBits( void ) const
{
	return (this->integer);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->integer = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->integer / 256);
}

int Fixed::toInt( void ) const
{
	return (this->integer >> this->fractional_bits);
}

const Fixed& Fixed::min( const Fixed &copy_1, const Fixed &copy_2 )
{
	if (copy_1 <= copy_2)
		return (copy_1);
	return (copy_2);
}

Fixed& Fixed::min( Fixed &copy_1, Fixed &copy_2 )
{
	if (copy_1 <= copy_2)
		return (copy_1);
	return (copy_2);
}

const Fixed& Fixed::max( const Fixed &copy_1, const Fixed &copy_2 )
{
	if (copy_1 >= copy_2)
		return (copy_1);
	return (copy_2);
}

Fixed& Fixed::max( Fixed &copy_1, Fixed &copy_2 )
{
	if (copy_1 >= copy_2)
		return (copy_1);
	return (copy_2);
}


Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}