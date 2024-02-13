#include <iostream>
#include "fib.hh"

int main(int argc, char const *argv[])
{
    int n, f;
    // std::cin >> n;
    // std::cout << fib_it(n) << std::endl;
    // std::cout << fib_rec(n) << " " << fib_it(n) << std::endl;
    std::cin  >> f;
    std::cout << fib_pos(fib_it(f)) << std::endl;
    return 0;
}