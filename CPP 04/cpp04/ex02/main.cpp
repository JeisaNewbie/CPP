/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:28:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/08/18 16:51:49 by jhwang2          ###   ########.fr       */
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