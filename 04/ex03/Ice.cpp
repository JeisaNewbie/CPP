#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria("ice")
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = obj;
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor Constructor called" << std::endl;
}

Ice& Ice::operator =(const Ice& obj)
{
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	if(this != &obj)
		type = obj.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
