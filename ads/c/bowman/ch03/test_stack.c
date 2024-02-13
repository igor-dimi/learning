#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void reverse()
{
    int item;
    while ((item = getchar()) != EOF)
        if(push(item) == FULL) break;
    
    while (!empty())
        putchar(pop());
}

int main(int argc, char const *argv[])
{
    // char item;
    // item = getchar();
    // putchar(item);
    // putchar(item = getchar());
    // while ((item = getchar()) != EOF)
        // putchar(item);
    reverse();
    printf("\n");
    return 0;
}
