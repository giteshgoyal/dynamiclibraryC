#include<stdio.h>
#include"stack.h"
int integerstackmain()
{
int y=1,a[1000],top=-1,x;
while(y)
    {
    printf("Press 1 to push an integer element\nPress 2 to pop an integer element\n");
    scanf("%d",&y);
    switch(y)
        {
        case 1:
            {
            printf("Enter the value to be added to stack\n");
            scanf("%d",&x);
            push(a,&top,x);
            break;
        }
        case 2:
            {
            x=pop(a,&top);
            printf("The element is %d\n",x);
            break;
        }
    }
  }
return 0;
}
