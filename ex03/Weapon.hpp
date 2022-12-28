#include <iostream>

#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

class Weapon {
public:
	Weapon(std::string type);
	const std::string&	getType() const;
	void	setType(const std::string type);

private:
	std::string	_type;
};

#endif
