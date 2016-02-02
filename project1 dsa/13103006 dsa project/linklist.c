#include"linklist.h"
void linklist() 
{ 
int z=1,k; 
 struct link* start;
start=createnode(); 
printf("for start node:"); 
put(start); 
while(z==1) 
{ 
printf("\n\n****************************************LINKLIST MODULE**************************************\n\n");
printf("Enter the choice \n 1 for INSERTING AT FIRST POSITION \n 2 forINSERTION AT LAST POSITION \n 3 for INSERTION ON Ith POSITION FROM BEGINNING \n 4 for INSERTION ON Ith POSITION FROM LAST \n 5 for DISPLAY \n 6 for DELETION \n 7 FOR FINDING LOOP\n 8 FOR REVERSING LINKLIST\n"); 
scanf("%d",&k); 
switch(k) 
{ 
case 1: 
// INSERTING AT FIRST POSITION
start=insertat1(start); 
break; 
case 2: 
//INSERTION AT LAST POSITION 
 insertatl(start);
break; 
case 3: 
//n=0; 
//INSERTION ON Ith POSITION FROM BEGINNING
 insertati(start);
break; 
case 4: 
//insertion on ith position from last 
insertatb(start);
break; 
case 5: 
display(start); 
break;
case 6: 
  del(start); 
     break;  
case 7: 
  loop(start); 
     break;
case 8: 
  reverse(start); 
     break;    
default: 
printf("ERROR"); 
} 
printf("WANT TO CONTINUE 1 FOR YES 0 FOR NO"); 
scanf("%d",&z); 
} }
