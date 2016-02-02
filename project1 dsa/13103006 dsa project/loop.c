#include"linklist.h" 
void loop(struct link* start)
{
int k,i; 
 struct link* next,*temp,*last; 
temp=start; 
last=start; 
do 
{ 
if(temp->node!=NULL) 
{ 
temp=temp->node->node; 
last=last->node; 
} 
else 
break; 
}while(temp!=last); 
if(temp==last) 
{ 
printf("loop exist"); 
k=1; 
} 
else 
printf("not "); 
if(k==1) 
{ 
last=start; 
while(temp!=last) 
{ 
temp=temp->node; 
last=last->node; 
} 
printf("\n%d\n",last->item); 
} }   

