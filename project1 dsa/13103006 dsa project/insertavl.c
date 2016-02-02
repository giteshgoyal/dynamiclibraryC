#include"tree1.h"   
node * insert(node *T,int x)
{
    if(T==NULL)
    {
        T=(node*)malloc(sizeof(node));
        T->data=x;
        T->left=NULL;
        T->right=NULL;
    }
    else
        if(x > T->data)               
        {
            T->right=insert(T->right,x);
            if(BF(T)==-2)
               {
 if(x>T->right->data)
                    T=RR(T);
                else
                    T=RL(T);
        }
}
        else
            if(x<T->data)
            {
                T->left=insert(T->left,x);
                if(BF(T)==2)
                   
{
 if(x < T->left->data)
                        T=LL(T);
                    else
                        T=LR(T);
            }
}
            T->ht=height(T);
            return(T);
}

