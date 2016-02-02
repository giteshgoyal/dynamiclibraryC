#include"linklist.h" 
void insertatl(struct link* start)
{
   int i,j,k,n=0;
 struct link* last,*temp,*next;
i=0;
last=start; 
while(temp!=NULL) 
{ 
n++; 
temp=temp->node; 

} 
if((n+1)<i) 
printf("try again"); 
else 
{ 
last=start; 
for(j=0;j<i;j++) 
{ 
last=last->node; 
} 
temp=start; 

while(last->node!=NULL) 
{ 
last=last->node; 
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
