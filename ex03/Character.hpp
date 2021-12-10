#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define INVENTORY_CAPACITY 4

class Character : public ICharacter {
public:
	Character();
	Character(std::string const& name);
	Character(const Character& copy);
	~Character();
	Character& operator=(const Character& rhs);

	std::string const& getName(void) const;
	void equip(AMateria* materia);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	
private:
	std::string m_name;
	AMateria* m_inventory[INVENTORY_CAPACITY];
};

#endif
