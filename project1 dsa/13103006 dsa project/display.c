#include"linklist.h" 
void display(struct link* temp) 
{ 
while(temp!=NULL) 
{ 
printf("%d ",temp->item); 
temp=temp->node; 
} 
} 
