/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:09:24 by ahkiler           #+#    #+#             */
/*   Updated: 2023/06/03 12:55:50 by ahkiler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
 #define ITER_HPP

template <class T1, class T2, class T3>
void iter(T1 address, T2 length, T3 f)
{

	for (int i = 0; i < length; i++)
		f(address[i]);
}

#endif