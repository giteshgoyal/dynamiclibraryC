#include"queue.h"
void display1(int front,int rear,int* queue) 
{ 
    int i; 
    if(front==rear) 
    { 
        printf("\nQueue is Empty!!!"); 
    } 
    else 
    { 
        printf(" \n"); 
        for(i=front+1;i<rear+1;i++) 
        { 
            printf("  %d ",queue[i]); 
        } 
            
    } 
}			
