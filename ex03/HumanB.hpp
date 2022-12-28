#include "Weapon.hpp"

#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

class HumanB {
public:
	HumanB(std::string name);

	void	attack() const;
	void	setWeapon(Weapon& club);

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif
