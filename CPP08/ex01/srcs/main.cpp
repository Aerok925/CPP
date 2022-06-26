//
// Created by John Nappa on 4/4/22.
//

#include "../incs/Span.hpp"

# include <stack>


int main()
{

try{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span span3(5);
	std::vector<int>	vector2;

	vector2.push_back(2);
	vector2.push_back(3);
	vector2.push_back(46);
	vector2.push_back(123);
	vector2.push_back(456);
	span3.addNumber(vector2.begin(), vector2.end());
	std::cout << span3.shortestSpan() << std::endl;
	std::cout << span3.longestSpan() << std::endl;
}
catch (std::exception &ex){
	ex.what();
}
}
