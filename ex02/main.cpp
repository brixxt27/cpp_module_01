#include <iomanip>
#include <iostream>

static void test_parameter_in_function(std::string stringORG, std::string* stringPTR, std::string& stringREF) {
	std::string		msg_add_stringORG	= "Address of stringORG: ";
	std::string		msg_add_stringPTR	= "Address of stringPTR: ";
	std::string		msg_add_stringREF	= "Address of stringREF: ";

	std::string		msg_val_stringORG	= "Value of stringORG: ";
	std::string		msg_val_stringPTR	= "Value of stringPTR: ";
	std::string		msg_val_stringREF	= "Value of stringREF: ";

	size_t			len_most_long_str = msg_add_stringORG.size();

	std::cout << "\n** test_parameter_in_function **\n" << std::endl;

	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringORG << &stringORG << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringPTR << &stringPTR << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringREF << &stringREF << std::endl;

	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringORG << stringORG << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringPTR << stringPTR << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringREF << stringREF << std::endl;
}

int	main(void) {
	std::string		stringORG = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringORG;
	std::string&	stringREF = stringORG;
	
	std::string		msg_add_stringORG	= "Address of stringORG: ";
	std::string		msg_add_stringPTR	= "Address of stringPTR: ";
	std::string		msg_add_stringREF	= "Address of stringREF: ";

	std::string		msg_val_stringORG	= "Value of stringORG: ";
	std::string		msg_val_stringPTR	= "Value of stringPTR: ";
	std::string		msg_val_stringREF	= "Value of stringREF: ";

	size_t			len_most_long_str = msg_add_stringORG.size();

	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringORG << &stringORG << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringPTR << &stringPTR << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_add_stringREF << &stringREF << std::endl;

	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringORG << stringORG << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringPTR << stringPTR << std::endl;
	std::cout << std::setw(len_most_long_str) << std::left << msg_val_stringREF << stringREF << std::endl;

	test_parameter_in_function(stringORG, stringPTR, stringREF);
	return 0;                                                                
}
