#include <iostream>
#include "mat_add.hh"

int main(int argc, char const *argv[])
{
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int res[ROWS][COLS];

    //input - initialize a, b;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < ROWS; j++)
            std::cin >> a[i][j];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < ROWS; j++)
            std::cin >> b[i][j];

    mat_add(a, b, res);

    std::cout << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < ROWS; j++)
            std::cout << res[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}




