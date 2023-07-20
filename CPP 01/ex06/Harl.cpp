/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:05:19 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:11:42 by jhwang2          ###   ########.fr       */
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

int	Harl::compare_str ( std::string level )
{
	if (!level.compare ("DEBUG"))
		return (0);
	else if (!level.compare ("INFO"))
		return (5);
	else if (!level.compare ("WARNING"))
		return (19);
	else if (!level.compare ("ERROR"))
		return (1);
	else
		return (20);
}

void Harl::harlFilter ( std::string level )
{
	int lev = this->compare_str (level);
	switch (lev)
	{
	case LEVEL::DEBUG:
		std::cout<<"[ DEBUG ]"<<std::endl;
		this->complain ("DEBUG");
		std::cout<<std::endl;
	case LEVEL::INFO:
		std::cout<<"[ INFO ]"<<std::endl;
		this->complain ("INFO");
		std::cout<<std::endl;
	case LEVEL::WARNING:
		std::cout<<"[ WARNING ]"<<std::endl;
		this->complain ("WARNING");
		std::cout<<std::endl;
	case LEVEL::ERROR:
		std::cout<<"[ ERROR ]"<<std::endl;
		this->complain ("ERROR");
		std::cout<<std::endl;
		break;
	default:
		std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
		break;
	}
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