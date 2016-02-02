#include"sort.h"  
void bubblesort() 
{ 
    int arr[20]; 
    int i=0,j=0,argc; 
    argc=input(arr);
  
    for(i=1;i<argc;i++) 
    { 
        
        for(j=1;j<(argc-(i));j++) 
        { 
            
            if(arr[j]>arr[j+1]) 
            { 
                
                int temp=arr[j]; 
                arr[j]=arr[j+1]; 
                arr[j+1]=temp; 
            } 
        } 
    } 
    
    printf("The sorted array is:"); 
    
    for(i=1;i<argc;i++) 
    { 
        
        printf("%d ",arr[i]); 
    } 
    
}
