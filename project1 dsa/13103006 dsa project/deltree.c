#include"tree.h"
void delete(int num,struct node* root) 
{ 

struct node *parent,*del,*temp; 

parent=root; 
del=root; 
while(del!=NULL && del->item !=num) 
{ 
parent=del; 

if(num < del->item) 
del=del->left; 
else 
del=del->right; 

} 

if(del==NULL) 
printf("Data Not Found"); 

else if(del->left!=NULL && del->right!=NULL) 
{ 
temp=del->right; 
while(temp->left!=NULL) 
{ 
parent=temp; 
temp=temp->left; 
} 
del->item=temp->item; 
del=temp; 
free(del); 
} 
} 

