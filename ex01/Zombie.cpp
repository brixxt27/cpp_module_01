#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = new std::string(name);
	announce();
}

Zombie::~Zombie() {
	std::cout << *_name << ": Growl..." << std::endl;
	delete _name;
}

void	Zombie::announce(void) {
	std::cout << *_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
