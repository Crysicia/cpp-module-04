#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < SOURCES_COUNT; i++) {
		m_sources[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < SOURCES_COUNT; i++) {
		if (m_sources[i]) {
			delete m_sources[i];
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	std::cout << "MateriaSource copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	for (int i = 0; i < SOURCES_COUNT; i++) {
		if (m_sources[i]) {
			delete m_sources[i];
		}
		if (rhs.m_sources[i]) {
			m_sources[i] = rhs.m_sources[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < SOURCES_COUNT; i++) {
		if (!m_sources[i]) {
			m_sources[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < SOURCES_COUNT; i++) {
		if (m_sources[i]->getType() == type) {
			return m_sources[i]->clone();
		}
	}
	return 0;
}
