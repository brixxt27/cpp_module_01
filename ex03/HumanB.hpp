#include "Weapon.hpp"

class HumanA {
public:
	void	attack() const;

private:
	Weapon		_weapon;
	std::string	_name;
};
