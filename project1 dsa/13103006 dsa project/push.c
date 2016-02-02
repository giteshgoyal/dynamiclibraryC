#include<stdio.h>
#include"stack.h"
int push(int a[],int *top,int x)
    {
    if(*top==999)
        {
        printf("stack full\n");
        return -1;
    }
    *top=*top+1;
    a[*top]=x;
    return 0;
}
