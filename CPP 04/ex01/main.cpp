/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/23 19:08:34 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main ( void )
{
	Animal	*arr[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout<<arr[i]->getType()<<" make sound like: ";
		arr[i]->makeSound();
		std::cout<<std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout<<arr[i]->getType()<<" make sound like: ";
		arr[i]->makeSound();
		std::cout<<std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
	return (0);
}