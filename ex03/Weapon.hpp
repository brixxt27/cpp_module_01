#include <iostream>

class Weapon {
public:
	Weapon(std::string type);
	const std::string&	getType() const;
	void	setType(const std::string type);

private:
	std::string	_type;
};
