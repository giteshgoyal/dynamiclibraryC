#include<stdio.h>
#include"stack.h"
int stack()
{
int y=1;
while(y!=0)
  {
printf("\n\n*************************************STACK MODULE**********************************************************\n\n");
  printf("enter 1 to work on integer stack\n enter 2 to work on character stack\n enter 3 to convert an infix expression to postfix expression\n enter 4 to convert an infix expression to prefix expression\n enter 5 to convert an postfix expression to infix expression\n enter 6 to convert an postfix expression to prefix expression\n enter 7 to exit");
  scanf("%d",&y);
  switch(y)
     {
	case 1:
	{
	integerstackmain();
	break;
	}
	case 2:
	{
	charstackmain();
	break;
	}
	case 3:
	{
	char a[1000],b[1000];
	printf("enter infix Expression:\n");
        scanf("%s",a);
	infixtopostfix(a,b);
        printf("Postfix Expression:\n%s\n",b);
	break;
	}
	case 4:
	{
	char a[1000],b[1000];
	printf("enter infix Expression:\n");
        scanf("%s",a);
	infixtoprefix(a,b);
        printf("Prefix Expression:\n%s\n",b);
	break;
	}
	case 5:
	{
	char a[1000];
	int b[1000];
	printf("enter postfix Expression:\n");
        scanf("%s",a);
	postfixtoinfix(a,b);
        printf("infix Expression:\n%s\n",b[0]);
	break;
	}
	case 6:
	{
	char a[1000];
        int b[1000];
	printf("enter postfix Expression:\n");
        scanf("%s",a);
	postfixtoprefix(a,b);
        printf("Prefix Expression:\n%s\n",b[0]);
	break;
      case 7:
       y=0;
        break;
	}
     }
  }
return 0;
}
