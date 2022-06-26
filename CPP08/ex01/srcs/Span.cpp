//
// Created by John Nappa on 4/5/22.
//

#include "../incs/Span.hpp"

Span::Span(unsigned int n) {
	this->size = n;
	this->count = 0;
}

Span::Span() {

}

Span::Span(const Span &temp) {
	this->vec = temp.vec;
	this->count = temp.count;
	this->size = temp.size;
}

Span &Span::operator=(const Span &temp) {
	this->vec = temp.vec;
	this->count = temp.count;
	this->size = temp.size;
	return *this;
}

Span::~Span() {

}

void Span::addNumber(int number) {
	if (count >= size)
		throw SpanExeption("too many argument");
	count++;
	vec.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (size -  count < end - start)
		throw SpanExeption("too many argument");
	std::vector<int>::iterator beg;
	for (beg = start; beg != end; beg++)
	{
		vec.push_back(*beg);
		count++;
	}
}

int Span::longestSpan() {
	if (count <= 1)
		throw SpanExeption("u can't use method longestSpan w/0 2 or more elements in array");
	std::vector<int>::iterator max;
	max = std::max_element(vec.begin(), vec.end());
	std::vector<int>::iterator min;
	min = std::min_element(vec.begin(), vec.end());
	return (*max - *min);
}

int Span::shortestSpan() {
	if (count <= 1)
		throw SpanExeption("u can't use method shortestSpan w/0 2 or more elements in array");
	std::vector<int>::iterator start = vec.begin();
	std::vector<int>::iterator end;
	unsigned int res = abs(*start - *(start + 1));
	for (start = vec.begin(); start != vec.end(); start++){
		for (end = start + 1; end != vec.end(); ++end){
			unsigned int localMin = abs(*end - *start);
			if (localMin < res)
				res = localMin;
		}
	}
	return (res);

}

char *Span::SpanExeption::what() const throw() {
	std::cout<<msg<<std::endl;
	return NULL;
}