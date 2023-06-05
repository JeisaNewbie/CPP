#ifndef	__PHONEBOOK_HPP__
 #define __PHONEBOOK_HPP__

#include "contact.hpp"

class phonebook
{
private:
	contact	contacts[8];
	int		num_of_contact;
	int		index;
public:
	phonebook() :num_of_contact (0), index (0) {}
	void	check_option ();
	void	add_contact ();
	void	show_contacts ();
	int		check_int (std::string index);
};

#endif