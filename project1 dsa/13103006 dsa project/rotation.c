#include"tree1.h"  
node * rotateleft(node *x)
{
    node *y;
    y=x->right;
    x->right=y->left;
    y->left=x;
    x->ht=height(x);
    y->ht=height(y);
    return(y);
}
node * RR(node *T)
{
    T=rotateleft(T);
    return(T);
}
node * LL(node *T)
{
    T=rotateright(T);
    return(T);
}
node * LR(node *T)
{
    T->left=rotateleft(T->left);
    T=rotateright(T);
    return(T);
}
node * RL(node *T)
{
    T->right=rotateright(T->right);
    T=rotateleft(T);
    return(T);
}
