#include "Harl.hpp"

int	main(int argc, char* argv[]) {
	Harl	harl;
	const std::string	arr_level[4] = {
		"DEBUG", 
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	num = -1;

	if (argc != 2) {
		std::cout << "Arguments must be 2" << std::endl;
		return EXIT_FAILURE;
	}

	const std::string	level = argv[1];

	for (int i = 0; i < NUM_LEVEL; i++) {
		if (arr_level[i] == level) {
			num = i;
			break;
		}
	}

	switch (num) {
		case Harl::INSIGNIFICANT:
			harl.insignificant();
			break;
		case Harl::DEBUG:
			harl.debug();
		case Harl::INFO:
			harl.info();
		case Harl::WARNING:
			harl.warning();
		case Harl::ERROR:
			harl.error();
	}
	
	return EXIT_SUCCESS;
}
