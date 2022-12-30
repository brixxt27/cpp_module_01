#include <fstream>
#include "sed_is_for_losers.hpp"
#include <iostream>

static std::string	GetNewFileName(char* filename) {
	std::string	filetype = ".replace";
	std::string	string_filename;

	string_filename = filename + filetype;
	return string_filename;
}

int main(int argc, char* argv[]) {
	char*				filename;
	std::string			s1;
	std::string			s2;
	std::ifstream		fin;
	std::ofstream		fout;
	std::string			buffer;
	size_t				pos;

	if (argc != 4) {
		std::cout << MSG_ERR_ARGC << std::endl;
		return EXIT_FAILURE;
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	fin.open(filename, std::ifstream::in);
	if (fin.is_open() == false) {
		std::cout << MSG_ERR_FILE_OPEN_FAIL << std::endl;
		return EXIT_FAILURE;
	}
	
	fout.open(GetNewFileName(filename).c_str(), std::ofstream::out);
	if (fout.is_open() == false) {
		std::cout << MSG_ERR_FILE_SAVE_FAIL << std::endl;
		return EXIT_FAILURE;
	}

	std::getline(fin, buffer, static_cast<char>(std::ifstream::traits_type::eof()));
	while (true) {
		pos = buffer.find(s1);
		if (pos == std::string::npos)
			break;
		buffer.erase(pos, s1.size());
		buffer.insert(pos, s2);
	}
	fout << buffer;

	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}
