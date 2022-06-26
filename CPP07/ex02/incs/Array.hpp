//
// Created by John Nappa on 4/3/22.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include "iostream"
#include "exception"

template <typename T>
class Array {
public:

	class ArrayExeption : public std::exception{
	public:
		ArrayExeption(){};
		virtual const char *what() const throw(){
			return ("Invalid index of array");
		};
	};
	Array(const Array<T>&temp){
		this->size = temp.size;
		this->array = new T[temp.size];
		for (unsigned int i= 0; i < this->size; i++){
			this->array[i] = temp.array[i];
		}
	}

	Array & operator=(const Array<T> & temp) {
		delete []this->array;
		this->size = temp.size;
		this->array = new T[temp.size];
		for (unsigned int i= 0; i < this->size; i++){
			this->array[i] = temp.array[i];
		}
		return *this;
	}

	Array(){
		this->size = 0;
		array = NULL;
	}
	Array(unsigned int n){
		this->size = n;
		this->array = new T[this->size];
		for (unsigned int i = 0; i < n; i++)
			array[i] = 0;
	}
	~Array(){
		if (this->size > 0)
			delete[] this->array;
	}
	T& operator[] (unsigned int index){
		if (index < 0 || index >= size)
			throw ArrayExeption();
		return (this->array[index]);
	}

private:
	T *array;
	unsigned int size;
};


#endif //CPP07_ARRAY_HPP
