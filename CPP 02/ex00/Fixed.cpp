/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:59:12 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:26:07 by jhwang2          ###   ########.fr       */
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
	// integer = copy.getRawBits ();
}

Fixed& Fixed::operator=( const Fixed& copy )
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	integer = copy.getRawBits (); //integer = copy.integer; 마찬가지로 가능
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->integer);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	integer = raw;
}