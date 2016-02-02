#include"linklist.h" 
void del(struct link *start) 
{ 
    int num;
    struct link *present,*prev; 
    present=start; 
    printf("Enter the element you want to delete"); 
   scanf("%d",&num); 
    while(present->item!=num) 
    { 
        prev=present; 
        present=present->node; 
if(present==NULL)
{
printf("not found\n");
break;
}    
} 
    prev->node=present->node; 
    free(present); 
} 
