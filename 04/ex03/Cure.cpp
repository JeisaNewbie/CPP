#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure& obj) : AMateria("cure")
{
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = obj;
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor Constructor called" << std::endl;
}

Cure& Cure::operator =(const Cure& obj)
{
	std::cout << "Cure Copy assignment Operator called" << std::endl;
	if(this != &obj)
		type = obj.getType();
	return (*this);
}

AMateria* Cure::clone() const {return new Cure();}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
