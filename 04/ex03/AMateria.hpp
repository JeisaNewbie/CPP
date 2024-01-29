#ifndef AMATERIA
# define AMATERIA

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria(void);
	AMateria(const AMateria& obj);
	AMateria(std::string const & _type);
	virtual ~AMateria(void);

	AMateria& operator =(const AMateria& obj);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif