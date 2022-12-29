#include <fstream>
#include "sed_is_for_losers.hpp"
#include <iostream>
#include <iostream>

static const char*	GetNewFileName(char* filename) {
	std::string	filetype = ".replace";
	std::string	string_filename;
	const char*	ret;
	char*		dest;

	string_filename = filename + filetype;
	ret = string_filename.c_str();
	dest = new char[strlen(ret) + 1];
	std::memcpy(dest, ret, std::strlen(ret) + 1);
	return dest;
}

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cout << MSG_ERR_ARGC << std::endl;
		return EXIT_FAILURE;
	}

	char*				filename = argv[1];
	std::string			s1 = argv[2];
	std::string			s2 = argv[3];
	std::ifstream		fin;
	std::ofstream		fout;
	std::string			buffer;
	size_t				pos;


	fin.open(filename, std::ifstream::in);
	if (fin.is_open() == false) {
		std::cout << MSG_ERR_FILE_OPEN_FAIL << std::endl;
		return EXIT_FAILURE;
	}

	const char*			new_filename = GetNewFileName(filename);

	fout.open(new_filename, std::ofstream::out);
	if (fout.is_open() == false) {
		std::cout << MSG_ERR_FILE_SAVE_FAIL << std::endl;
		return EXIT_FAILURE;
	}

	while (true) {
		if (fin.eof() == true)
			break;
		getline(fin, buffer);
		while (true) {
			pos = buffer.find(s1);
			if (pos == std::string::npos)
				break;
			buffer.erase(pos, s1.size());
			buffer.insert(pos, s2);
		}
		fout << '\n';
		fout << buffer;
	}

	fin.close();
	fout.close();

	delete[] new_filename;

	return EXIT_SUCCESS;
}
