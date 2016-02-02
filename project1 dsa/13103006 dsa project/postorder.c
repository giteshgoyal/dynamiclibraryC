#include"tree.h" 
void postorder(struct node* t) 
{ 

if(t!=NULL) 
{ 

postorder(t->left); 
postorder(t->right); 
printf("%d\n",t->item); 
} 
} 
