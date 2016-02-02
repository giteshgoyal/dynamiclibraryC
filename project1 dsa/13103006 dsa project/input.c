#include"sort.h"
int input(int* arr)
{
int n,i;
printf("Enter the no of  elements in array:\n");
scanf("%d",&n); 
printf("Enter the elements in array one by one:\n");
    for(i=1;i<=n;i++) 
    { 
        scanf("%d",&arr[i]); 
    }
return (n+1); 
}
