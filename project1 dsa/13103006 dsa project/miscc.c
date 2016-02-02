#include"sort.h"
 void miscc()
{
int choice,i;
while(1) 
{ 
printf("\n\n******************************MISCELLENEOUS MODULE***************************************\n\n");
printf("Enter your choice\n1 for finding mode\n2 for TOWER OF HANOI\n3 for exit "); 
scanf("%d",&choice); 

switch(choice) 
{ 

case 1: 
mode();
break; 
case 2: 
i=tower();
break; 
case 3: 
exit(0);
break;
default:
return 0; 
}
}
}
