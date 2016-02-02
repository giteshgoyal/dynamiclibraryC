#include"queue.h"
int queue[20],front=-1,rear=-1; 
int max=20; 
void queue1() 
{ 
int ch,z; 
front=-1,rear=-1;
do 
{ 
printf("\n\n******************************************QUEUE MODULE****************************************\n\n");
   printf("\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY "); 
    printf("\nEnter your Choice:"); 
    scanf("%d",&ch); 

    switch(ch) 
    { 
    case 1: enqueue(&rear,max,queue); 
    break; 
    case 2: dequeue(&front,&rear,queue); 
    break; 
    case 3: display1(front,rear,queue); 
    break; 
    
    default:printf("\n ERROR!!"); 
    } 
printf("\n Want to continue 1 for yes 0 for no\n"); 
scanf("%d",&z); 
}while(z==1); 
} 
 
 



