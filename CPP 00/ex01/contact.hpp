#ifndef CONTACT_HPP
 #define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <limits>
class contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	contact() {}
	void	add_info ();
	void	show_outline (int i);
	void	show_info ();
	void	replace_field (std::string str);
	void	show_field (std::string str);
};

#endif