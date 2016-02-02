#include"tree.h"  
int tree() 
{ 
struct node* root;
int num,delet,a; 
root=(struct node*)malloc(sizeof(struct node)); 
int choice; 


while(1) 
{ 
printf("***************************************TREE MODULE*******************************************************");

printf("Enter your choice\n1 for INSERTION\n2 for INORDER TRAVERSAL\n3 for PREORDER TRAVERSAL\n4 for POSTORDER TRAVERSAL\n5 for Deletion\n6 for TBT OPERATIONS \n7 for AVL OPERATIONS\n8 to Exit\n"); 
scanf("%d",&choice); 

switch(choice) 
{ 

case 1: 
printf("Enter the value you want to insert\n"); 
scanf("%d",&num); 
maketree(num,root); 
break; 

case 2: 
printf("\nInorder:"); 
inorder(root); 
break; 
case 3: 
printf("\nPreorder:"); 
preorder(root); 
break; 
case 4: 
printf("\nPostorder:"); 
postorder(root); 
break; 
case 5: 
printf("Enter the value you want to delete"); 
scanf("%d",&delet); 
delete(delet,root); 
break;
case 6:
a=tbt();
break;
case 7:
 a=avl1();
break;
case 8: 
exit(0); 
 
} 
} 
return 0; 
} 



