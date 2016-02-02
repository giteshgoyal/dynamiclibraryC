#include<stdio.h>
#include"stack.h"
int pushtop(int a[],int *top)
    {
    if(*top==-1)
        {
        printf("stack empty\n");
        return 0;
    }
    int u=a[*top];
    return u;
}
