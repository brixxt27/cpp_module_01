#include "Zombie.hpp"

int main(void) {
	Zombie      a;
	const int   num_zom = 5;

	a.setName("StackZom");
	a.announce();

	Zombie*     b = zombieHorde(num_zom, "HeapZoms");

	for (int i = 0; i < num_zom; i++) {
		b[i].announce();
	}

	delete[] b;
	// system("leaks moar_brainz");
}
