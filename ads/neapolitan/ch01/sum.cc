#include <iostream>
#include <cstdlib>
#include <vector>
#include "arr.hh"

template <typename T>
T sum (const T a[], int size)
{
    T res = 0;
    int i = 0;
    // invariant: res == sum(a[0..i-1])
    while (i < size) {res += a[i]; i++;}
    return res;
}

template <typename T>
T sum(std::vector<T> const& vec)
{
    T res = 0;
    for (const auto& el : vec) res += el;
    return res;
}

template<typename T>
void print(std::vector<T> const& vec)
{
    for (const auto& el : vec) std::cout << el << " ";
    std::cout << std::endl;
}


const int SIZE = 5;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a[SIZE];
    fill_rand(a, SIZE, 10);
    print(a, SIZE);
    std::vector<int> vec;
    for (int i = 0; i < SIZE; i++) vec.push_back(a[i]);
    auto res = sum(a, SIZE);
    auto res2 = sum(vec);
    std::cout << res << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}
