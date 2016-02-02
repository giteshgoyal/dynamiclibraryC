#include<stdio.h>
#include<string.h>
#include"stack.h"
void infixtoprefix(char a[],char x[])
    {
    char y[1000];
    int i,n=strlen(a),topx=-1,topy=-1;
    for(i=n-1;i>=0;i--)
        {
        if((a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
            pushc(y,&topy,a[i]);
        }
        else
            {
                while((topx!=-1)&&(priority(pushtopc(x,&topx))>priority(a[i])))
                    {
                    pushc(y,&topy,popc(x,&topx));
                }
               pushc(x,&topx,a[i]);
        }
    }
    while(topx!=-1)
            {
            pushc(y,&topy,popc(x,&topx));
        }
   while(topy!=-1)
       {
       pushc(x,&topx,popc(y,&topy));
   }
   pushc(x,&topx,'\0');
}
