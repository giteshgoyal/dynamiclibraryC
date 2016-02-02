#include"tree.h"

void create(struct tbtnode *root)
{
   int x,op,flag,y;
   flag=0;
   char ch;
   struct tbtnode *curr=root;
   struct tbtnode *q,*p;
 do
   {
     printf("\nCurrent node %d \n\n 1.Left Direction.\n\n2.Right Direction",curr->data);
     printf("\nEnter ur choice :");
     scanf("%d",&op);
     switch(op)
     {
       case 1: if(curr->lbit==1)
                {
                    printf("Enter left child of %d : ",curr->data);
                    scanf("%d",&x);
                    q=(struct tbtnode *)malloc(sizeof(struct tbtnode));
                    q->data=x;
                    q->lbit=q->rbit=1;
                    q->left=curr->left;
                    q->right=curr;
                    curr->left=q;
                    curr->lbit=0;
                    q->child=0;
                    flag=1;
                }
                else
                    curr=curr->left;
                break;
        case 2: if(curr->rbit==1)
                {

                    printf("Enter right child of %d :",curr->data);
                    scanf("%d",&x);
                    q=(struct tbtnode *)malloc(sizeof(struct tbtnode));
                    q->data=x;
                    q->lbit=q->rbit=1;
                    q->left=curr;
                    q->right=curr->right;
                    curr->right=q;
                    curr->rbit=0;
                    q->child=1;
                    flag=1;
                }
                else
                    curr=curr->right;
                break;
    }
  }while(flag==0);
}
