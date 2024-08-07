#include <iostream>
#include <vector>
#include <iomanip>

int fib_rec(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_rec(n - 2) + fib_rec(n - 1);
}

int fib_dyn(int n)
{
    int* f = new int[n + 1];
    f[0] = 0;
    if (n > 0) {
        f[1] = 1;
        // ghost i == 1;
        // invariant: f[i] == fib(i);
        for (int i = 2; i <= n; i++)
            f[i] = f[i - 1] + f[i - 2];
    } 
    return f[n];
     
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout << fib_rec(n) << "\t" << fib_dyn(n) << std::endl;

    return 0;
}
