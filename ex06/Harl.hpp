#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

#define NUM_LEVEL 5

class Harl {
public:
	void	complain(std::string level);

private:
	enum e_level {
		INSIGNIFICANT = 0,
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	void	insignificant(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
