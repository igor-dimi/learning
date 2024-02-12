#include <iostream>
#include "mat.hh"

int main(int argc, char const *argv[])
{
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int mult[ROWS][COLS];
    int add[ROWS][COLS];

    //input - initialize a, b;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < ROWS; j++)
            std::cin >> a[i][j];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < ROWS; j++)
            std::cin >> b[i][j];

    mat_mult(a, b, mult);
    mat_add(a, b, add);

    std::cout << "product: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < ROWS; j++)
            std::cout << mult[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "sum: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < ROWS; j++)
            std::cout << add[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}
