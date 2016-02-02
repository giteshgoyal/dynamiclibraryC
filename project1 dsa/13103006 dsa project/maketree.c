#include"tree.h"
void maketree(int x,struct node* root) 
{ 

struct node* p,*previous,*current; 

p=(struct node*)malloc(sizeof(struct node)); 

if(p==NULL) 
printf("Out of Memory"); 
p->item=x; 
p->left=NULL; 
p->right=NULL; 

if(root==NULL) 
{ 
root=p; 
return; 
} 

previous = NULL; 
current=root; 

while(current!=NULL) 
{ 
previous=current; 
if(p->item < current->item) 
current=current->left; 
else 
current=current->right; 
} 

if(p->item < previous->item) 
previous->left=p; 
else 
previous ->right=p; 

} 

