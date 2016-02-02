#include"sort.h" 
int arr[30]; 
void binarysearch1(int,int,int); 
int binarysearch() 
{ 
   int i=0,n,search; 
   n= input(arr);
    printf("\nEnter the element you want to search:"); 
    scanf("%d",&search); 
    
    binarysearch1(1,n-1,search); 
    return 0; 
    } 

void binarysearch1(int low,int high,int item) 
{ 
    
    if(low>high) 
    { 
        printf("\nElement not found\n"); 
        exit(0); 
    } 
    
    else 
    { 
        int mid=(low+high)/2; 
        
        if(arr[mid]==item) 
        { 
            printf("Element Found at position %d\n",mid); 
            exit(0); 
        } 
        
        else if(item < arr[mid]) 
            binarysearch1(low,mid-1,item); 
        
        else 
            binarysearch1(mid+1,high,item); 
    
} 
} 
