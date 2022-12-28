#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie();

private:
	std::string	_name;

	void    announce(void);
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );
