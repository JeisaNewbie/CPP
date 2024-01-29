#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria			**slot;
	int					slotCnt;
	static const int	slotMax;

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& obj);
	~MateriaSource();

	MateriaSource& operator =(const MateriaSource& obj);

	const AMateria *getSlot(int idx) const;

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif