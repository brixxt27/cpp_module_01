#include "Zombie.hpp"

int main(void) {
	{
		Zombie	alone("StackZom1");
	}
	Zombie*	a = newZombie("HeapZom1");
	Zombie* b = newZombie("HeapZom2");

	delete b;
	delete a;

	randomChump("StackZom2");
	randomChump("StackZom3");
}
