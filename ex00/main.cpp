#include "Zombie.hpp"

int main(void) {
	Zombie	a("StackZom1");
	Zombie* b = a.newZombie("HeapZom1");

	delete b;
}
