#include <iostream>
#include <cstdlib>
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


const int SIZE = 5;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a[SIZE];
    fill_rand(a, SIZE, 10);
    print(a, SIZE);
    auto res = sum(a, SIZE);
    std::cout << res << std::endl;
    return 0;
}
