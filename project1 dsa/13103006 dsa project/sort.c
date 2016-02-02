#include"sort.h"
void sort()
{
int z=1,choice,a;
 while(z==1) 
    { 
      printf("\n\n****************************************SORTING $ SEARCHING MODULE*****************************\n\n");       
 printf("Enter 1 for binary search\nEnter 2 for bubble sort\n Enter 3 for insertion sort\n Enter 4 for selection sort \n Enter 5 for quick sort:"); 
            scanf("%d",&choice); 
        
    
    switch(choice) 
    { 
        case 1: 
           a=binarysearch(); 
            break; 
            
        case 2: 
           bubblesort();  
            break; 
       case 3: 
            a=insertionsort();
            break;
          case 4: 
           selectionsort(); 
            break; 
           case 5: 
           quicksort(); 
            break; 
        default: 
            printf("\nERROR"); 
            
    } 
        
        
    printf("PRESS 1 for continue 0 for exit"); 
scanf("%d",&z); 
    } 


}
