/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhwang2 <jhwang2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:27:26 by ahkiler           #+#    #+#             */
/*   Updated: 2023/07/20 18:00:52 by jhwang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace( char *s1, char *s2 ) : s1 (s1), s2 (s2) {};

int	replace::open_File ( char *f_name )
{
	std::string	name (f_name);
	in_FILE.open (name);
	if (!in_FILE.is_open ())
	{
		std::cout<<"File does not exist"<<std::endl;
		return (0);
	}
	out_FILE.open (name + ".replace");
	return (1);
}

void	replace::replace_str ( std::string &str )
{
	std::string	tmp (str);
	int	tmp_len = tmp.length ();
	int	s1_len = s1.length ();
	int	s2_len = s2.length ();
	int	i = -1;
	int	j = 0;

	str = "";
	while (++i < tmp_len)
	{
		if (!tmp.compare (i, s1_len, s1))
		{
			while (j < s2_len)
				str.push_back (s2.at (j++));
			i += s1_len - 1;
			j = 0;
		}
		else
			str.push_back (tmp.at (i));
	}
}

void	replace::replace_File ( void )
{
	std::string		str;

	while (std::getline (in_FILE, str))
	{
		replace_str (str);
		out_FILE << str;
		if (in_FILE.tellg () != -1)
			out_FILE << '\n';
	}
	in_FILE.close ();
	out_FILE.close ();
}