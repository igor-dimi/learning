#include "stack.h"
#include "stack.c"
#include "check_paren.h"

int check_paren(char data[])
{
    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] == '(') push(data[i]);
        if (data[i] == ')') {
            if (empty()) return ERR;
            pop();
        }
    }
    if (empty()) return OK;
    return ERR;
}
