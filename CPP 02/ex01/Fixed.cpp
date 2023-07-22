/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:59:12 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/22 13:48:48 by jhwang2          ###   ########.fr       */
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

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

Fixed& Fixed::operator=( const Fixed& copy )
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->integer = copy.getRawBits (); //integer = copy.integer; 마찬가지로 가능
	return (*this);
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

std::ostream& operator<<( std::ostream& os, const Fixed& copy )
{
	os<<copy.toFloat ();
	return (os);
}