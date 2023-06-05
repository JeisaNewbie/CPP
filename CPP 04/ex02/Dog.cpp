/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:40:06 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:41:02 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout<<"Dog Constructor called"<<std::endl;
	dog_brain = new Brain();
}
Dog::Dog( const Dog& copy )
{
	*this = copy;
}

Dog& Dog::operator=( const Dog& copy )
{
	if (this->dog_brain != copy.dog_brain)
	{
		delete dog_brain;
		dog_brain = new Brain(*copy.dog_brain);
	}
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout<<"Wall Wall!"<<std::endl;
}

std::string Dog::getType( void ) const
{
	return (type);
}

Dog::~Dog( void )
{
	std::cout<<"Dog Destructor called"<<std::endl;
	delete dog_brain;
}