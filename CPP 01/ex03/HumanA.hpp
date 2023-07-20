/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:49:33 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 17:58:04 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
 #define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&type;
public:
	HumanA( std::string name, Weapon &type );
	void	attack ( void );
};

#endif