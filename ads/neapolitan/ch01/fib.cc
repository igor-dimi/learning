#include <iostream>
#include <vector>
#include <iomanip>

int fib_rec(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_rec(n - 2) + fib_rec(n - 1);
}



int* fib_dyn(int n)
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
    return f;
     
}

void print_fib(int n)
{
    int* f = fib_dyn(n);
    for (int i = 0; i <= n; i++)
        std::cout << f[i] << " ";
    std::cout << std::endl;
    delete f;
}

int fib(int n)
{
    int* p = fib_dyn(n);
    int res = p[n];
    delete p;
    return res;
}

std::vector<int> fib_dyn2(int n)
{
    std::vector<int> f;
    f.push_back(0); f.push_back(1);
    // ghost i == 2
    // invariant: f[0 .. i - 1] = [fib(0) .. fib(i - 1)]
    for (int i = 2; i < n; i++) f.push_back(f[i - 2] + f[i - 1]);
    // i == n;
    return f;
}

template <typename T>
void print(std::vector<T> vec)
{
    for (auto const& el : vec) std::cout << el << " ";
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout << fib_rec(n) << "\t" << fib(n) << std::endl;
    print_fib(n);

    auto f = fib_dyn2(n);
    print(f);

    return 0;
}
