#ifndef ARR_H
#define ARR_H

#include <iostream>
#include <cstdlib>

template <typename T>
void print(const T a[], int size)
{for (int i = 0; i < size; i++) std::cout << a[i] << " ";
 std::cout << std::endl; }

void fill_rand(int a[], int size, int max)
{for (int i = 0; i < size; i++) a[i] = rand() % max;}

#endif // !ARR_H
