#include "Harl.hpp"

void	Harl::complain(std::string level) {
	int					idx_fp = 0;
	const std::string	arr_level[5] = {
		"INSIGNIFICANT", 
		"DEBUG",
		"INFO",
		"WARNING", 
		"ERROR"
	};

	for (int i = 1; i < NUM_LEVEL; i++) {
		if (arr_level[i] == level) {
			idx_fp = i;
			break;
		}
	}

	switch (idx_fp) {
		case INSIGNIFICANT:
			insignificant();
			break;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
	}
}

void	Harl::insignificant(void) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
