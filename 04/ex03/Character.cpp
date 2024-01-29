#include "Character.hpp"

const int Character::slotMax = 4;

Character::Character(void)
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const Character& obj)
: name(obj.getName()), slot(new AMateria*[slotMax]), slotCnt(0)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = obj;
}

Character::Character(std::string const & _name): name(_name), slot(new AMateria*[slotMax]), slotCnt(0)
{
	std::cout << "Character Constructor called" << std::endl;
	for(int i = 0; i < slotMax; i++)
		slot[i] = NULL;
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
	for(int i = 0; i < slotCnt; i++)
		delete(slot[i]);
	delete[](slot);
}

Character& Character::operator =(const Character& obj)
{
	std::cout << "Character Copy Assignment Operator called" << std::endl;
	if(this != &obj){
		name = obj.name;

		for(int i = 0; i < slotCnt; i++) delete(slot[i]);
		delete[](slot);

		slotCnt = obj.slotCnt;

		slot = new AMateria*[slotMax];
		for(int i = 0; i < slotCnt; i++)
			slot[i] = obj.slot[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const {return name;}

const AMateria *Character::getSlot(int idx) const {return slot[idx];}

void Character::equip(AMateria* m)
{
	if(slotCnt == slotMax){
		std::cout << "Error: Slot is full" << std::endl;
		delete(m);
		return ;
	}
	else{
		for(int i = 0; i < slotCnt; i++){
			if(slot[i] == m){
				std::cout << "Error: Already equiped materia" << std::endl;
				return ;
			}
		}
		std::cout << name << " equips a " << m->getType() << " at slot[" << slotCnt << "]" << std::endl;
		slot[slotCnt++] = m;
	}
}

void Character::unequip(int idx)
{
	if(slot[idx] == NULL)
		std::cout << "Error: Slot[" << idx << "] is empty" << std::endl;
	else{
		std::string tmp = slot[idx]->getType();
		for(int i = idx + 1; slot[i] != NULL; i++){
			slot[i - 1] = slot[i];
			slot[i] = NULL;
		}
		std::cout << name << " unequips a " << tmp << " in slot[" << idx << "]" << std::endl;
		slotCnt--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= slotCnt)
		std::cout << "Error: Slot[" << idx << "] is empty" << std::endl;
	else
		slot[idx]->use(target);
}
