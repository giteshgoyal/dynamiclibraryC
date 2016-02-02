#include"linklist.h" 
void insertati(struct link* start)
{
int n=0,i,j,k;
 struct link* temp,*next;
printf("\n\nENTER THE POSITION "); 
scanf("%d",&i); 
temp=start; 
while(temp!=NULL) 
{ 
n++; 
temp=temp->node; 

} 
if((n+1)<i) 
printf("try again"); 
else 
{ 
temp=start; 
for(j=2;j<i;j++) 
{ 
temp=temp->node; 
} 
next=createnode(); 
next->node=temp->node; 
temp->node=next; 
printf("ENTER THE VALUE\n"); 
scanf("%d",&k); 

next->item=k; 
} 
}
