#include "fib.hh"

long long int fib_rec(int n)
{
    if (n < 0) return -1;
    if (n < 2) return n;
    return fib_rec(n-1) + fib_rec(n-2);
};

long long int fib_it(int n)
{
    if (n < 0) return -1;
    //n >= 0
    int g = 1, f = 0;
    int i = 0; //f == fib(i) && g == fib(i + 1)
    while (i < n){
        g += f; //g == fib(i + 2)
        f = g - f; //f == fib(i + 1);
        i++;
    } // i == n;
    return(f);
}

int fib_pos(int n)
{
    int i = 0, f = 0, g = 1; //f == fib(i) && g == fib(i + 1)
    while (f < n) {
        g += f; // g == fib(i + 2)
        f = g - f; // f == fib(i + 1)
        i++;
    } // f >= n;
    if (f == n) return (i);
    return -1;
}