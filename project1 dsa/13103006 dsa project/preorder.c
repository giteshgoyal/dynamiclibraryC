#include"tree.h" 
void preorder(struct node* t) 
{ 

if(t!=NULL) 
{ 
printf("%d\n",t->item); 
preorder(t->left); 
preorder(t->right); 

} 
} 
