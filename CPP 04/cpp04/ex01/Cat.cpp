/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:45:30 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 16:47:04 by jhwang2          ###   ########.fr       */
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
		this->type = copy.type;
	}
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

void Cat::get_ideas(int i)
{
	this->cat_brain->get_ideas(i);
}

void Cat::set_ideas(std::string &str, int i)
{
	this->cat_brain->set_ideas(str, i);
}