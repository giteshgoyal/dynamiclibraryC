#include"tree.h"

struct tbtnode *insuc(struct tbtnode *t)
   {
     if(t->rbit==0)
      {
      t=t->right;
       while(t->lbit==0)
      t=t->left;
      return(t);
      }
     else
       return(t->right);
    }
