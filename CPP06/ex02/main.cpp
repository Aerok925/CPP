//
// Created by John Nappa on 4/3/22.
//

#include "A.hpp"

Base * generate(void){
	srand(time(NULL));
	int ran = rand() % 3;
	if (!ran)
		return new A;
	else if (ran == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p){
	if (dynamic_cast<A *>(p)){
		std::cout<<"This is class A"<<std::endl;
	}
	else if (dynamic_cast<B *>(p)){
		std::cout<<"This is class B"<<std::endl;
	}
	else if (dynamic_cast<C *>(p)){
		std::cout<<"This is class C"<<std::endl;
	}
	else
		std::cout<<"Unknown type"<<std::endl;
}

void identify(Base& p){
	try{
		A &a = dynamic_cast<A &>(p);
		std::cout<<"This is class A"<<std::endl;
	}
	catch (std::exception &ex){}
	try{
		B &a = dynamic_cast<B &>(p);
		std::cout<<"This is class B"<<std::endl;
	}
	catch (std::exception &ex){}
	try{
		C &a = dynamic_cast<C &>(p);
		std::cout<<"This is class C"<<std::endl;
	}
	catch (std::exception &ex){}
}

int main()
{
	Base *b = generate();
	identify(*b);
	identify(b);

}