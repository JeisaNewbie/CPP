#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	Character(void);

	std::string			name;
	AMateria			**slot;
	int					slotCnt;
	static const int	slotMax;

public:
	Character(const Character& obj);
	Character(std::string const & type);
	~Character(void);

	Character& operator =(const Character& obj);

	std::string const &getName() const;
	const AMateria *getSlot(int idx) const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif