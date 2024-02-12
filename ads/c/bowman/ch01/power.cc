#include <iostream>

// return n^m
int power(int n, int m)
{
    int i = 0, res = 1;
    //res == n^i && i <= m;
    while (i < m) {
        

        res *= n; //res == n^(i + 1)
        i++; //res == n^i
    } // i == m;
    return(res);
}


int main(int argc, char const *argv[])
{
    int n, m;
    std::cin >> n >> m;  
    std::cout << power(n, m) << std::endl;
    return 0;
}
