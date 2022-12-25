#include "Zombie.hpp"

int main(void) {
	Zombie	a("StackZom1");
	Zombie* b = a.newZombie("HeapZom1");

	delete b;
	
	a.randomChump("StackZom2");

	Zombie*	c = new Zombie("HeapZom2");
	Zombie*	d = c->newZombie("HeapZom3");

	d->randomChump("StackZom3");

	delete c;
	delete d;
}
