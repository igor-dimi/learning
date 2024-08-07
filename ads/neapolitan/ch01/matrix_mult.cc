#include <iostream>
#include <iomanip>


// not really workding because c 2d array stuff...

template <typename T>
T** matrix_mult(T** m1, T** m2, int N, int M, int M2)
{
    T** res = new T[N][M2];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            //compute res[i][j]
            res[i][j] = 0;
            for (int k = 0; k < M; k++)
                res[i][j] += m1[i][k] * m2[k][j];
    return res;
}

template <typename T>
void print(T** m, int N, int M)
{
    for (int j = 0; j < M; i++) {
        std::cout << std::setprecision(3);
        for (int i = 0; i < N; i++)
            std::cout << std::setw(50) << m[i][j] << " ";
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    
    
        
    return 0;
}
