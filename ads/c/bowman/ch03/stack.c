#include "stack.h"

int top = -1;
int stack[MAXSTACK];

int push(int val)
{
    if (top >= MAXSTACK - 1) //overflow
        return FULL;

    stack[++top] = val;
    return OK; 
}

int pop() {return stack[top--];}

int empty()
{
    if (top < 0) return TRUE;
    return FALSE;
}