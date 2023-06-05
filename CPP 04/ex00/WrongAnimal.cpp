/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:36:08 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 19:24:21 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ): type("empty")
{
	std::cout<<"WrongAnimal Constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal ( const std::string& type ): type("empty")
{
	std::cout<<"WrongAnimal Constructor called"<<std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& copy )
{
	this->type = copy.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout<<"Wrongempty Wrongempty!"<<std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (type);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout<<"WrongAnimal Destructor called"<<std::endl;
}
