#include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();

	void    announce(void);
	Zombie* zombieHorde( int N, std::string name );
	void	setName(std::string name);

private:
	std::string _name;
};
