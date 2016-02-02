#include"queue.h"
void dequeue(int* front,int* rear,int* queue) 
{ 
    if((*rear)==(*front)) 
    { 
        printf("\nUnderflow!!"); 
    } 
    else 
    { 
        *front=*front+1; 
        printf("\n Dequeued \n"); 
    } 
} 
