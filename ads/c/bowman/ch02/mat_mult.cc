#include "mat.hh"


//1 outer loop + 2 nested loops => O(n^3)
void mat_mult(int a[ROWS][COLS], int b[ROWS][COLS], int res[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++){
            res[i][j] = 0;
            for (int k = 0; k < COLS; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
}