#include"linklist.h" 
 
struct link* createnode() 
{ 
struct link* temp; 
temp= (struct link*)malloc(sizeof(struct link)); 
return temp; 
} 

void put(struct link* temp) 
{ 
int i; 
printf("ENTER THE VALUE\n"); 
scanf("%d",&i); 
temp->item=i; 


} 
