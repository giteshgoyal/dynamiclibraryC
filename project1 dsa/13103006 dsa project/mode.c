#include"sort.h" 
void mode() 
{ 
int arr[30],freq[30],k=0,l,n=0; 
int i,j,num=0; 
n=input(arr);
n=n-1;
for(j=1;j<=n;j++) 
{ num=0; 
for(i=j;i<=n;i++) 
{ 
if(arr[i]==arr[j]) 
num=num+1; 
} 
freq[j]=num; 

} 

num=freq[1]; 

for(i=1;i<=n;i++) 
{ 
if(num<freq[i]) 
num=freq[i]; 
} 

for(i=1;i<=n;i++) 
{ 
if(num==freq[i]) 
{ 
k++; 
l=i; 
} 
} 

if(k==1) 
printf("\n MODE IS %d\n",arr[l]); 
else 
printf("doesnot exist"); 
}
