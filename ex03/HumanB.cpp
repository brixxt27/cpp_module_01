#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
: _name(name) 
, _weapon(NULL) 
{}

void	HumanB::attack() const {
	if (_weapon == NULL) {
		std::cout << "Weapon is not exist" << std::endl;
		return;
	}
	std::cout << _name << ": attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& club) {
	_weapon = &club;
}
