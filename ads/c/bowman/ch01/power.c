#ifndef POW_H
#define POW_H
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
#endif // !POW_H


