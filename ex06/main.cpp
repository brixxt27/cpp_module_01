#include "Harl.hpp"

int	main(int argc, char* argv[]) {
	Harl	karen;

	if (argc != 2) {
		std::cout << "Arguments must be 2" << std::endl;
		return EXIT_FAILURE;
	}
	karen.complain(argv[1]);
	return EXIT_SUCCESS;
}
