// O(n)
int sum(int n)
{
    int i = 0, res = 0;
    // res == sum(0..i) && i <= n;
    while (i < n) {
        // res + (i + 1) == sum(0..i+1)
        res += (i + 1); //res == sum(0..i+1)
        i++;
    } // i == n;
    return res;
}

// O(1)
int sum2(int n)
{
    return n * (n + 1) / 2;
}

