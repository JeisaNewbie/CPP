/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:05:36 by ahkiler           #+#    #+#             */
/*   Updated: 2023/05/19 16:16:28 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl h;
	h.complain ("DEBUG");
	h.complain ("INFO");
	h.complain ("WARNING");
	h.complain ("ERROR");
}