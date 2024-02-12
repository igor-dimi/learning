#include <iostream>
#include "fib.hh"
#define MAX 100



int main(int argc, char const *argv[])
{
    for (int i = -1; i <= MAX; i++) {
        std::cout << i << " " << fib_rec(i) << std::endl;
    }
    return 0;
}
