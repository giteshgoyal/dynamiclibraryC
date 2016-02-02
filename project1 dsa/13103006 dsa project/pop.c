#include<stdio.h>
#include"stack.h"
int pop(int a[],int *top)
    {
    if(*top==-1)
        {
        printf("stack empty\n");
        return -1;
    }
    int u=a[*top];
    *top=*top-1;
    return u;
}
