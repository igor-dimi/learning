#include <stdio.h>
#include "check_paren.h"

char data[100];

int main(int argc, char const *argv[])
{

    int i = 0;
    while ((data[i++] = getchar()) != EOF);
    printf("%d\n", check_paren(data));

    return 0;
}

