#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) {
	Zombie* newZom = new Zombie(name);

	return newZom;
}
