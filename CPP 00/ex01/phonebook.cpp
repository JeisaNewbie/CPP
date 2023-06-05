#include "phonebook.hpp"

void	phonebook::check_option ()
{
	std::string	EXIT ("EXIT");
	std::string	exit ("exit");
	std::string	SEARCH ("SEARCH");
	std::string	search ("search");
	std::string	ADD ("ADD");
	std::string	add ("add");
	std::string	option;

	while (1)
	{
		std::cout<<"Please type one of three commands: ADD, SEARCH, and EXIT"<<std::endl;
		std::getline (std::cin, option);
		if (option.compare (EXIT) == 0 || option.compare (exit) == 0)
			return ;
		else if (option.compare (ADD) == 0 || option.compare (add) == 0)
			add_contact ();
		else if (option.compare (SEARCH) == 0 || option.compare (search) == 0)
			show_contacts ();
		else
			std::cout<<"Error: Wrong command"<<std::endl;
	}
}

void	phonebook::add_contact ()
{
	if (index == 8)
		index = 0;
	contacts[index++].add_info ();
	if (num_of_contact != 8)
		num_of_contact++;
}

void	phonebook::show_contacts ()
{
	int			i;
	std::string	index;

	i = -1;
	std::cout<<" ___________________________________________"<<std::endl;
	std::cout<<"|     INDEX|    F_NAME|    L_NAME|    N_NAME|"<<std::endl;
	std::cout<<" ___________________________________________"<<std::endl;
	while (++i < this->num_of_contact)
	{
		contacts[i].show_outline (i);
		std::cout<<" ___________________________________________"<<std::endl;
	}
	std::cout<<"Type index you want to see"<<std::endl;
	std::getline (std::cin, index);
	i = check_int (index);
	if (!(0 < i && i <= num_of_contact))
	{
		std::cout<<"Error: Out of range"<<std::endl;
		return ;
	}
	contacts[i - 1].show_info ();
	return ;
}

int	phonebook::check_int (std::string index)
{
	if (index.length () > 1)
		return (-1);
	else
	{
		if (!('1' <= index.at (0) && index.at (0) <= '8'))
			return (-1);
		else
			return (index.at (0) - '0');
	}
}