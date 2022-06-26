//
// Created by John Nappa on 4/3/22.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

#include <string>
#include "iostream"

template <typename T>
void iter(T *array, size_t size, void(*f)(T const &));

#endif //CPP07_ITER_HPP
