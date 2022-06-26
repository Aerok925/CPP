//
// Created by John Nappa on 4/3/22.
//

#include "../incs/Array.hpp"

int main() {
	try{
		Array<int> a(3);
		a[0] = 5;
		std::cout<<a[2];
		Array<int> b(7);
		a = b;
		std::cout<<a[6];
		Array<int> c(a);
		std::cout<<c[6];
		Array<char> cha(5);
		for (int i = 0; i < 5; i++)
			cha[i] = i +'A';
		std::cout<<cha[4];
	}
	catch (std::exception &ex)
	{
		std::cout<<ex.what()<<std::endl;
	}
}