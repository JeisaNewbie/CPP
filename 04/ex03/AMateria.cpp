#include "ICharacter.hpp"

AMateria::AMateria(void){
	std::cout << "AMateria Default Donstructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj){
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = obj;
}

AMateria::AMateria(std::string const & _type) : type(_type){
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria(void){
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria& AMateria::operator =(const AMateria& obj){
	std::cout << "AMateria Copy Assignment Operator called" << std::endl;
	if(this != &obj)
		type = obj.getType();
	return *this;
}

std::string const & AMateria::getType() const{
	return type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Use at " << target.getName() << std::endl;
}
