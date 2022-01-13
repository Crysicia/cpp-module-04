#include "Character.hpp"

Character::Character() : m_name("Nameless") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++) {
		m_inventory[i] = NULL;
	}
}

Character::Character(std::string const& name) : m_name(name) {
	std::cout << "Character named constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++) {
		m_inventory[i] = NULL;
	}
}

Character::Character(const Character& copy) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++) {
		if (m_inventory[i]) {
			delete m_inventory[i];
		}
	}
}

Character& Character::operator=(const Character& rhs) {
	std::cout << "Character copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	this->m_name = rhs.m_name;
	for (int i = 0; i < INVENTORY_CAPACITY; i++) {
		if (m_inventory[i]) {
			delete m_inventory[i];
		}
		if (rhs.m_inventory[i]) {
			m_inventory[i] = rhs.m_inventory[i]->clone();
		}
	}
	return *this;
}

std::string const& Character::getName(void) const {
	return m_name;
}

void Character::equip(AMateria* materia) {
	for (int i = 0; i < INVENTORY_CAPACITY; i++) {
		if (!m_inventory[i]) {
			m_inventory[i] = materia;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 or idx >= INVENTORY_CAPACITY) { return ; }
	m_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 or idx >= INVENTORY_CAPACITY) { return ; }
	if (m_inventory[idx]) {
		m_inventory[idx]->use(target);
	}
}
