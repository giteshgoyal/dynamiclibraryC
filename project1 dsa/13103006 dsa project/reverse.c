#include"linklist.h" 
void reverse(struct link* start)
{  
 struct link* p,*r,*q; 
 p = start;
     q = NULL; 
      
    while (p != NULL) 
    { 
        r = q; 
    q = p; 
        p = p->node; 
        q->node = r; 
    } 
    start=q; 
printf("REVERSED\n"); 
 }                
