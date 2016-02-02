#include"main.h"
int main()
{
int a,choice;
printf("\n\n********************************* WELCOME!!!!******************************\n\n\n");
printf("***************************PROJECT BY GITESH GOYAL (13103006)******************\n\n\n");
printf("***********************************INSTRUCTIONS******************************** \n\n");
printf("\t\t*CHOOSE MODULES BY PRESSING NUMBERS SPECIFIED NUMBERS\n\t\t** ENTER VALUES WITHIN RANGE\n\t\t***DONOT ENTER IILEGAL VALUES\n\t\t  ****ENTER SORTED ARRAY FOR BINARY SEARCH \n\n\n ");


while(1)
{printf("************************************* INDEX ***********************************");
printf("\n\t1: LINKLIST\t\t\t2: STACK\t\t3: QUEUE\n\t4: SORTING $ SEARCHING\t\t5: TREE\t\t\t6: MISCELLENEOUS\n\t\t\t\t\t7:EXIT\n");
scanf("%d",&choice);
switch(choice) 
{ 

case 1: 
linklist(); 
break; 
case 2: 
a=stack();
break; 
case 3: 
queue1();
break; 
case 4: 
sort(); 
break; 
case 5: 
a=tree();
break;
case 6:
miscc();
break;
case 7: 
printf("***************************************THANK YOU****************************************************\n"); 
exit(0); 
 
} 
}

return 0; 
} 



