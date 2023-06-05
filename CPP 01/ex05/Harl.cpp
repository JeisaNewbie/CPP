/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:05:19 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/19 16:14:44 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level )
{
	(this->*c_level[level.at (0) - 68]) ();
}

void Harl::debug( void )
{
	std::cout<<"베이컨 많이 들어간게 좋아요"<<std::endl;
}

void Harl::info( void )
{
	std::cout<<"베이컨 부족해요"<<std::endl;
}

void Harl::warning( void )
{
	std::cout<<"베이컨 공짜로 더주세요"<<std::endl;
}

void Harl::error( void )
{
	std::cout<<"사장님 어딨어요"<<std::endl;
}