//
// Created by John Nappa on 4/2/22.
//

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int main(){
	uintptr_t raw;
	uintptr_t qweqweqwe;
	Data * a = new Data();
	Data *b;
	a->x = 42;
	a->y = 42.42;
	std::cout << "adress serialize RAW: " << &raw  << std::endl;
	raw = serialize(a);
	qweqweqwe = serialize(a);
	std::cout << "adress data A: " << a << std::endl;
	std::cout << "A: x: " << a->x << "\t" << "y: "<< a->y << "\t" << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "qweqweqwe: " << qweqweqwe << std::endl;
	std::cout << "adress serialize RAW: " << &raw  << std::endl;
	b = deserialize(raw);
	std::cout << "adress deserialize raw: " << b  << std::endl;
	std::cout << "x: " << b->x  << "y: " << b->y << std::endl;
	delete a;
}