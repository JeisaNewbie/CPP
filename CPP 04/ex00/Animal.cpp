/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:36:08 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 16:08:33 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void ): type("empty")
{
	std::cout<<"Animal Constructor called"<<std::endl;
}

Animal::Animal ( const std::string& type ): type("empty")
{
	std::cout<<"Animal Constructor called"<<std::endl;
}

Animal::Animal( const Animal& copy )
{
	*this = copy;
}

Animal& Animal::operator=( const Animal& copy )
{
	this->type = copy.type;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout<<"empty empty!"<<std::endl;
}

std::string Animal::getType( void ) const
{
	return (type);
}

Animal::~Animal( void )
{
	std::cout<<"Animal Destructor called"<<std::endl;
}
