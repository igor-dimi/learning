void mat_add(int rows, int cols, int** a, int** b, int** res)
{

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            res[i][j] = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            res[i][j] = a[i][j] + b[i][j];
}