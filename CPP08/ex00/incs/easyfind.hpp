//
// Created by John Nappa on 4/5/22.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <vector>
#include <list>
#include <set>
#include <deque>
#include "iostream"

class myexeption : public std::exception{
public:
	virtual const char *what() const throw(){
		return "Cant find";
	}
};

template<typename T>
typename T::iterator easyfind(T &a, int n){
	typename T::iterator resu = std::find(a.begin(), a.end(), n);
	if (resu == a.end())
	{
		/*throw myexeption();*/

	}
	return resu;
}

#endif //CPP08_EASYFIND_HPP
