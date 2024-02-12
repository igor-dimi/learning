#ifndef MAT_H
#define MAT_H
#define ROWS 2
#define COLS 2
void mat_add(int a[ROWS][COLS], int b[ROWS][COLS], int res[ROWS][COLS]);
void mat_mult(int a[ROWS][COLS], int b[ROWS][COLS], int res[ROWS][COLS]);
#endif // !MAT_H