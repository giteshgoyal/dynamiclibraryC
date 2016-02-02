#include"tree.h"
void inorder(struct node* t) 
{ 

if(t!=NULL) 
{ 
inorder(t->left); 
printf("%d\n",t->item); 
inorder(t->right); 

} 
} 


