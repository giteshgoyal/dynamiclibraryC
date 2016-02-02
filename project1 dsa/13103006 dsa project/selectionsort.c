#include"sort.h"
void selectionsort() 
{ 
    int arr[20]; 
    
     int argc,i,j; 
    
   argc=input(arr);
    for(i=1;i<argc;i++) 
    { 
        
        for(j=i+1;j<argc;j++) 
        { 
            if(arr[i]>arr[j]) 
            { 
                int temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp; 
                
            } 
            
        } 
    } 
    printf("The sorted array is:"); 
    for(i=1;i<argc;i++) 
    { 
        printf("%d ",arr[i]); 
    } 
    
}
