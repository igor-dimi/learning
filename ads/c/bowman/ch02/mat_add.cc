#include "mat.hh"
void mat_add(int a[ROWS][COLS], int b[ROWS][COLS], int res[ROWS][COLS])
{

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            res[i][j] = 0;

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            res[i][j] = a[i][j] + b[i][j];
}