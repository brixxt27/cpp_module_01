#include <iostream>

int	main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of string: " << &str << std::endl;
	std::cout << "Address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;

	std::cout << 

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value of stringPTR: " << stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return 0;
}
