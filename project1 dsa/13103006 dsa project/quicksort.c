#include"sort.h"
 int part(int *arr,int l,int n) 
{ 
int i=l+1,j=n; 
int temp; 
while(j>i) 
{ 
while(arr[i]<arr[l]&&i<=n) 
i++; 
while(arr[j]>arr[l]&&j>=l) 
j--; 
if(j>i) 
{ 
temp=arr[i]; 
arr[i]=arr[j]; 
arr[j]=temp; 
} 
} 
temp=arr[l]; 
arr[l]=arr[j]; 
arr[j]=temp; 
return j; 
} 
int quick(int *arr,int l,int n) 
{ int j; 
if(l<=(n)) 
{ 
j=part(arr,l,n); 
quick(arr,l,j-1); 
quick(arr,j+1,n); 

} 
return 0; 
} 
void quicksort() 
{ 
int arr[20],i,argc; 
 argc=input(arr);
printf("the sorted array is: \n"); 
quick(arr,1,argc-1); 
for(i=1;i<argc;i++) 
printf("%d ",arr[i]); 
}

