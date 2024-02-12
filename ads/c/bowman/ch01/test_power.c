#include <stdio.h>
#include "power.h"


int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", power(n, m));
    return 0;
}
