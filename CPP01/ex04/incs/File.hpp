#ifndef CPP01_FILE_HPP
#define CPP01_FILE_HPP

#include "iostream"
#include "fstream"

class File {
public:
	File(const char*, const char*, const char*);
	bool replace();
private:
	std::ifstream	fin;
	std::ofstream	fon;
	std::string		file_name;
	std::string		insert;
	std::string		found;
};

#endif //CPP01_FILE_HPP
