#include <iostream>
// #include "mat_add.hh"
#define ROWS 2
#define COLS 2


int main(int argc, char const *argv[])
{
    // int* a[];
    // int* b[];
    // int* c[];

    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int c[ROWS][COLS];


    //read input for a and b
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            std::cin >> a[i][j];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            std::cin >> b[i][j];
    


    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    
    //output
    std::cout << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << c[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
