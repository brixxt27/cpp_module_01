#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) {
    Zombie** new_horde = new Zombie*[N];

    for (int i  = 0; i < N; i++) {
        new_horde[i] = new Zombie(name);
    }
}
