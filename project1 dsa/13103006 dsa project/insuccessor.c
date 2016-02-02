#include"tree.h"

void inorder_successor(struct tbtnode *head,int x)
   {
    struct tbtnode *t;
    t=head->left;
    printf("\n");
    while(t->lbit==0)
    t=t->left;
      while(t!=head)
       {   
           t=insuc(t);
           if(t->data==x)
           { 
                t=insuc(t);
                printf("  %d",t->data);
            }
       }
   }
