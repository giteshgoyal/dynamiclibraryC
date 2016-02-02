#include<stdio.h>
#include"stack.h"
int pushc(char a[],int *top,char x)
    {
    if(*top==999)
        {
        printf("stack full\n");
        return 0;
    }
    *top=*top+1;
    a[*top]=x;
    return 0;
}
