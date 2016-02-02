#include<stdio.h>
#include<string.h>
#include"stack.h"
void postfixtoprefix(char a[],int y[])
    {
    int topy=-1,i,n=strlen(a),u,v,j;
    char *p,*q,*r;
    for(i=0;i<n;i++)
        {
        if((a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
            p=malloc(sizeof(char));
            *p=a[i];
            push(y,&topy,p);
        }
        else
            {
            q=pop(y,&topy);
            r=pop(y,&topy);
            u=strlen(q);
            v=strlen(r);
            p=malloc(sizeof(char)*(u+v+1));
            *p=a[i];
            for(j=1;j<=v;j++)
                {
                *(p+j)=*(r+j-1);
            }
            for(j;j<u+v+1;j++)
                {
                *(p+j)=*(q+j-v-1);
            }
            push(y,&topy,p);
            free(r);
            free(q);
        }
    }
}
