/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:05:19 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:09:50 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ()
{
	c_level[0] = &Harl::debug;
	c_level[5] = &Harl::info;
	c_level[19] = &Harl::warning;
	c_level[1] = &Harl::error;
}

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