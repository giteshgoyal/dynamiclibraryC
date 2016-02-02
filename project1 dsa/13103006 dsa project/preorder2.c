#include"tree1.h"  
void preorder4(node *T)
{
    if(T!=NULL)
    {
        printf(" %d(Bf=%d)",T->data,BF(T));
        preorder4(T->left);
        preorder4(T->right);
    }
}
