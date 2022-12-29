#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

#define NUM_LEVEL 4

class Harl {
public:
	void	insignificant(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	enum e_level {
		INSIGNIFICANT = -1,
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
};

#endif
