/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:45:30 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 19:24:32 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout<<"WrongCat Constructor called"<<std::endl;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	*this = copy;
}
WrongCat& WrongCat::operator=( const WrongCat& copy )
{
	this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout<<"Wrongnyaong Wrongnyaong!"<<std::endl;
}

std::string WrongCat::getType( void ) const
{
	return (type);
}

WrongCat::~WrongCat( void )
{
	std::cout<<"WrongCat Destructor called"<<std::endl;
}