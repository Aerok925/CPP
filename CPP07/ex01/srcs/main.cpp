//
// Created by John Nappa on 4/3/22.
//

#include "../incs/iter.hpp"

class Test{
public:
	int x;
	Test() {x = 6;}
	~Test() {};
};

std::ostream &operator<<(std::ostream &out, const Test &temp){
	out<<temp.x;
	return out;
}

template <typename T>
void iter(T *array, size_t size, void(*f)(T const &)){
	for (size_t i = 0; i < size; i++){
		f(array[i]);
	}
}
template <typename T>
void print(T const &x)
{
	std::cout<<x<<std::endl;
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	char cha[] = "asdasd";
	Test test[5];
	iter(test, 5, print);
	iter(a, 5, print);
	iter(cha, 6, print);
}