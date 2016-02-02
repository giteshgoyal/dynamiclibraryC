#include"linklist.h" 
struct link* insertat1(struct link* start)
{
int k;
 struct link* next;
next=createnode(); 
next->node=start; 
start=next; 
printf("ENTER THE VALUE\n"); 
scanf("%d",&k); 

start->item=k; 
return start;
}
