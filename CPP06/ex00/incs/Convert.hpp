//
// Created by John Nappa on 4/2/22.
//

#ifndef CPP06_CONVERT_HPP
#define CPP06_CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Convert{
private:
	int dot;
	int count;
	int floa;
	std::string arg;
	Convert();
	int isAlNumeric(std::string arg);

public:
	Convert(std::string arg);
	~Convert();
	Convert(const Convert & copy);
	Convert & operator= (const Convert & right);

	void convert();
};


#endif //CPP06_CONVERT_HPP
