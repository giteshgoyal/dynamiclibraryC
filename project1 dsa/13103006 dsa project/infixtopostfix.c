#include"stack.h"
#include<string.h>
void infixtopostfix(char a[],char x[])
    {
    char y[1000],u;
    int topx=-1,topy=-1;
    int i=0,n=strlen(a);
    for(i=0;i<n;i++)
        {
        if((a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
            pushc(x,&topx,a[i]);
        }
        else
            {
                while((topy!=-1)&&(priority(pushtopc(y,&topy))>=priority(a[i])))
                    {
                    pushc(x,&topx,popc(y,&topy));
                }
               pushc(y,&topy,a[i]);
        }
    }
    while(topy!=-1)
            {
            pushc(x,&topx,popc(y,&topy));
        }
    pushc(x,&topx,'\0');
}
