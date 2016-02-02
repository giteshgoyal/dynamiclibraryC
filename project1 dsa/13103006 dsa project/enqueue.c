#include"queue.h"
void enqueue(int* rear,int max,int* queue) 
{ 
    int element; 
    if((*rear)==max) 
    { 
        printf("\nOverflow!!"); 
    } 
    else 
    { 
        printf("\nEnter Element:"); 
        scanf("%d",&element);
      *rear=*rear+1; 
        queue[*rear]=element; 
        printf("\n  Enqueued \n"); 
    } 
 
} 
 
