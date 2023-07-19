#ifndef	__PHONEBOOK_HPP__
 #define __PHONEBOOK_HPP__

#include "contact.hpp"

class phonebook
{
private:
	contact	contacts[8];
	int		num_of_contact;
	int		index;
	int		add_contact ();
	int		show_contacts ();
	int		check_int (std::string index);
public:
	phonebook() :num_of_contact (0), index (0) {}
	void	check_option ();
};

#endif