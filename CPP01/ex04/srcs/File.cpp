#include "../incs/File.hpp"

File::File(const char *file_name, const char *found, const char *insert) {
	this->file_name = file_name;
	this->found = found;
	this->insert = insert;
	this->fin.open(this->file_name);
}

bool File::replace() {
	std::string buf;
	size_t		id = 0;
	if (!fin.is_open()){
		std::cerr<<"# FILE NAME ERROR\n";
		return (1);
	}
	if (found.length() == 0 || insert.length() == 0){
		std::cerr<<"# STRING ERROR\n";
		return (1);
	}
	fon.open(file_name + ".replace");
	if (!fon.is_open()){
		std::cerr<<"# CAN'T CREATE FILE\n";
		return (1);
	}
	while (std::getline(fin, buf))
	{
		id = buf.find(found);
		while (id != std::string::npos)
		{
			buf.erase(id, found.length());
			buf.insert(id, insert);
			id = buf.find(found);
		}
		fon<<buf<<std::endl;
	}
	fon.close();
	fin.close();
	return (0);
}