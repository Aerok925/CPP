//
// Created by John Nappa on 4/5/22.
//

#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP

#include <vector>
#include "iostream"

class Span {
private:
	std::vector<int> vec;
	int size;
	int count;
	Span();
public:
	class SpanExeption : virtual public std::exception{
		private:
			std::string msg;
		public:
			SpanExeption(std::string msg) : msg(msg) {};
			char *what() const throw();
			virtual ~SpanExeption() throw() {};
	};
	~Span();
	Span(unsigned int n);
	Span(const Span &temp);
	Span &operator=(const Span &temp);
	void addNumber(int number);
	int longestSpan();
	int shortestSpan();
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
};


#endif //CPP08_SPAN_HPP
