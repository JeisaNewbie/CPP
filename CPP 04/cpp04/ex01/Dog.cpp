/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:40:06 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 13:14:43 by jhwang2          ###   ########.fr       */
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

void Dog::get_ideas()
{
	this->dog_brain->get_ideas();
}