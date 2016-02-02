#include<stdio.h>
#include"stack.h"
int charstackmain()
{
int y=1,top=-1;
char a[1000],x;
while(y)
    {
    printf("Press 1 to push an character element\nPress 2 to pop an character element\n");
    scanf("%d",&y);
    switch(y)
        {
        case 1:
            {
            printf("Enter the value to be added to stack\n");
            scanf("%c%c",&x,&x);
            pushc(a,&top,x);
            break;
        }
        case 2:
            {
            x=popc(a,&top);
            printf("The element is %c\n",x);
            break;
        }
    }
  }
return 0;
}
