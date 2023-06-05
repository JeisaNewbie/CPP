/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:45:30 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 17:41:11 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout<<"Cat Constructor called"<<std::endl;
	cat_brain = new Brain();
}

Cat::Cat( const Cat& copy )
{
	*this = copy;
}
Cat& Cat::operator=( const Cat& copy )
{
	if (this->cat_brain != copy.cat_brain)
	{
		delete this->cat_brain;
		this->cat_brain = new Brain(*copy.cat_brain);
	}
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout<<"nyaong nyaong!"<<std::endl;
}

std::string Cat::getType( void ) const
{
	return (type);
}

Cat::~Cat( void )
{
	std::cout<<"Cat Destructor called"<<std::endl;
	delete cat_brain;
}