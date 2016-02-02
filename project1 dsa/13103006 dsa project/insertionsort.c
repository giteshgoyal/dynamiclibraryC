#include"sort.h" 
int insertionsort() 
{ 

int argc,a[20],i=1,j,key; 
 argc=input(a);

for(i=2;i<argc;i++) 
{ 

key=a[i]; 
j=i-1; 

while(j>=1 && key< a[j]) 
{ 

a[j+1]=a[j]; 
j--; 
} 

a[j+1]=key; 

} 
 printf("The sorted array is:"); 
for(i=1;i<argc;i++) 
{ 
printf("%d ",a[i]); 
} 

return 0; 
} 
