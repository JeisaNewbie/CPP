#include "contact.hpp"

void	contact::add_info ()
{
	std::cout<<"First_name: "<<std::endl;
	std::cin>>this->first_name;
	std::cout<<"Last_name: "<<std::endl;
	std::cin>>this->last_name;
	std::cout<<"Nickname: "<<std::endl;
	std::cin>>this->nickname;
	std::cout<<"Phone_number: "<<std::endl;
	std::cin>>this->phone_number;
	std::cout<<"Darkest_secret: "<<std::endl;
	std::cin>>this->darkest_secret;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	contact::replace_field (std::string str)
{
	std::string	field = "          ";

	if (str.length () <= 10)
		field.replace (10 - str.length (), str.length (), str);
	else
	{
		field.replace (0, 9, str.substr (0, 9));
		field.replace (9, 1, ".");
	}
	std::cout<<field<<"|";
}

void	contact::show_outline (int i)
{
	std::string	index  = "12345678";
	std::string	field_i  = "          ";

	std::cout<<"|";
	field_i.replace (9, 1, index.substr (i, 1));
	std::cout<<field_i<<"|";
	replace_field (first_name);
	replace_field (last_name);
	replace_field (nickname);
	std::cout<<std::endl;
}

void	contact::show_field (std::string str)
{
	std::string	field = "|                                            |";
	int			length = str.length ();
	int			i = 0;

	while (i <= str.length () / 45)
	{
		std::string	tmp = field.substr ();
		if (length > 45)
			tmp.replace (1, 45, str.substr (i * 45, 45));
		else
			tmp.replace (1, length, str.substr (i * 45, 45));
		std::cout<<tmp<<std::endl;
		length -= 45;
		i++;
	}
}

void	contact::show_info ()
{
	std::cout<<" ____________________________________________"<<std::endl;
	std::cout<<"|First_Name:                                 |"<<std::endl;
	show_field (first_name);
	std::cout<<"|____________________________________________|"<<std::endl;
	std::cout<<"|Last_Name:                                  |"<<std::endl;
	show_field (last_name);
	std::cout<<"|____________________________________________|"<<std::endl;
	std::cout<<"|NickName:                                   |"<<std::endl;
	show_field (nickname);
	std::cout<<"|____________________________________________|"<<std::endl;
	std::cout<<"|Phone_Number:                               |"<<std::endl;
	show_field (phone_number);
	std::cout<<"|____________________________________________|"<<std::endl;
	std::cout<<"|Darkest_secret:                             |"<<std::endl;
	show_field (darkest_secret);
	std::cout<<"|____________________________________________|"<<std::endl;
}
