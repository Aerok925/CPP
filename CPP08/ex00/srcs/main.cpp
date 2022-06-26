//
// Created by John Nappa on 4/4/22.
//

#include "../incs/easyfind.hpp"



int main()
{

try{
	std::cout<<"============================================"<<std::endl;
	std::deque<int> D;
	for (int i = 12; i > 0; --i)
		D.push_back(i);
	std::deque<int>::iterator itd;
	std::cout << "Deque: ";
	for (itd = D.begin(); itd != D.end(); itd++)
		std::cout << *itd << " ";

	if (easyfind(D, 2) != D.end())
		std::cout << std::endl << "OK" << std::endl;
	else
		std::cout << std::endl << "NOT OK" << std::endl;
	std::cout<<"============================================"<<std::endl;
	std::set<int> Set;
	Set.insert(20);
	Set.insert(-2);
	Set.insert(1);
	Set.insert(-3);

	std::set<int>::iterator its;
	std::cout << "Set: ";
	for (its = Set.begin(); its != Set.end(); its++)
		std::cout << *its << " ";

	if (easyfind(Set, 2) != Set.end())
		std::cout << std::endl << "OK" << std::endl;
	else
		std::cout << std::endl << "NOT OK" << std::endl;

	std::cout<<"============================================"<<std::endl;

	std::list<int>	L;
	for (int i = 7; i > 0; --i)
		L.push_back(i);
	std::list<int>::iterator itl;
	std::cout << "List: ";
	for (itl = L.begin(); itl != L.end(); itl++)
		std::cout << *itl << " ";

	if (easyfind(L, 1) != L.end())
		std::cout << std::endl << "OK" << std::endl;
	else
		std::cout << std::endl << "NOT OK" << std::endl;

	std::cout<<"============================================"<<std::endl;

	std::vector<int> A;

	for (int i = 10; i > 0; --i)
		A.push_back(i);

	std::vector<int>::iterator it;
	std::cout << "Vector: ";
	for (it = A.begin(); it < A.end(); it++)
		std::cout << *it << " ";

	if (easyfind(A, 2) != A.end())
		std::cout << std::endl << "OK" << std::endl;
	else
		std::cout << std::endl << "NOT OK" << std::endl;

	std::cout<<"============================================"<<std::endl;

	return (0);

}
catch (std::exception &ex){
	std::cout<<ex.what();
}




}
