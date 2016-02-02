#include"tree1.h"  
void inorder4(node *T)
{
    if(T!=NULL)
    {
        inorder4(T->left);
        printf(" %d(Bf=%d)",T->data,BF(T));
        inorder4(T->right);
    }
}
