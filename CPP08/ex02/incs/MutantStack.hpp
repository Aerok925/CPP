//
// Created by John Nappa on 4/5/22.
//

#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP

#include <stack>
#include "iostream"

template <class T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack() : std::stack<T>(){};
	~MutantStack(){};
	MutantStack(const MutantStack & copy) : std::stack<T>(copy){};
	MutantStack &operator=(const MutantStack &right){
		if (this != right)
			std::stack<T>::operator=(right);
		return (*this);
	};

	typename std::stack<T>::container_type::const_iterator begin() const{
		return std::stack<T>::c.begin();
	}

	typename std::stack<T>::container_type::const_iterator end() const{
		return std::stack<T>::c.end();
	}

	typename std::stack<T>::container_type::const_reverse_iterator rend() const{
		return std::stack<T>::c.rend();
	}

	typename std::stack<T>::container_type::const_reverse_iterator rbegin() const{
		return std::stack<T>::c.rbegin();
	}

	typename std::stack<T>::container_type::iterator begin(){
		return std::stack<T>::c.begin();
	}

	typename std::stack<T>::container_type::iterator end(){
		return std::stack<T>::c.end();
	}

	typename std::stack<T>::container_type::reverse_iterator rend(){
		return std::stack<T>::c.rend();
	}

	typename std::stack<T>::container_type::reverse_iterator rbegin(){
		return std::stack<T>::c.rbegin();
	}

};

#endif //CPP08_MUTANTSTACK_HPP
