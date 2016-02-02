#include"tree.h"

void inorder1(struct tbtnode *head)
   {
    struct tbtnode *t;
    t=head->left;
    printf("\n");
    while(t->lbit==0)
    t=t->left;
      while(t!=head)
       {
     printf("  %d",t->data);
     t=insuc(t);
       }
   }

