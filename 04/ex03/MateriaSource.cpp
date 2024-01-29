#include "MateriaSource.hpp"

const int MateriaSource::slotMax = 4;

MateriaSource::MateriaSource(void)
: slot(new AMateria*[slotMax]), slotCnt(0)
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for(int i = 0; i < slotMax; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
: slot(new AMateria*[slotMax]), slotCnt(0)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = obj;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for(int i = 0; i < slotCnt; i++)
		delete(slot[i]);
	delete[](slot);
}

MateriaSource& MateriaSource::operator =(const MateriaSource& obj)
{
	std::cout << "MateriaSource Copy Assignment Operator called" << std::endl;
	if(this != &obj){
		for(int i = 0; i < slotCnt; i++) delete(slot[i]);
		delete[](slot);

		slotCnt = obj.slotCnt;

		slot = new AMateria*[slotMax];
		for(int i = 0; i < slotCnt; i++)
			slot[i] = obj.slot[i]->clone();
	}
	return *this;
}

const AMateria *MateriaSource::getSlot(int idx) const {return slot[idx];}

void MateriaSource::learnMateria(AMateria* m)
{
	if(slotCnt == slotMax)
	{
		std::cout << "Error: Slot is full" << std::endl;
		return ;
	}
	else
	{
		std::cout << "Save a " << m->getType() << " at slot[" << slotCnt << "]" << std::endl;
		slot[slotCnt++] = m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < slotCnt; i++)
		if(slot[i]->getType() == type)
			return (slot[i]->clone());
	return (NULL);
}
