/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:36:08 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 16:50:58 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void ): type("empty")
{
	std::cout<<"Animal Constructor called"<<std::endl;
}

Animal::Animal ( const std::string& type ): type(type)
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
