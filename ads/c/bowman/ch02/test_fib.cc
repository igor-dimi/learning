#include <iostream>
#include "fib.hh"

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout << fib_it(n) << std::endl;
    // std::cout << fib_rec(n) << " " << fib_it(n) << std::endl;
    return 0;
}