#include <iostream>


void f (int n, int m, int* a[])
{
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            std::cout << a[i][j];
}

void g (int n, int b[])
{
    for (int i = 0; i < n; i++) std::cout << b[i];
}

int main(int argc, char const *argv[])
{
    int a[3][3];
    // f(3, 3, a);
    int b[10];

    for (int i = 0; i < 2; i++) std::cin >> b[i];
    for (int i = 0; i < 2; i++) std::cout << b[i] << " ";
    std::cout << std::endl;
    g(2, b);
    return 0;
}
