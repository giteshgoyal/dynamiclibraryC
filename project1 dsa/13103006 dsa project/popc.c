#include<stdio.h>
#include"stack.h"
char popc(char a[],int *top)
    {
    if(*top==-1)
        {
        printf("stack empty\n");
        return 0;
    }
    char u=a[*top];
    *top=*top-1;
    return u;
}
