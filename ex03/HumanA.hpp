#include "Weapon.hpp"

#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	void	attack() const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
