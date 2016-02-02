#include"tree.h" 


int tbt()
  {
    int op,x,n,i=0,item;
    char ch;
    struct tbtnode *head,*root,*succ;       
    head=(struct tbtnode *)malloc(sizeof(struct tbtnode));
    head->left=head;
    head->right=head;
    head->lbit=1;
    head->rbit=1;
do
      {
     printf("\nThreaded binary tree operations");
     printf("\n1)create\n2)inorder\n3)Successor\n4)exit");
     printf("\nEnter ur choice: ");
     scanf("%d",&op);
  switch(op)
   {
    case 1:

    printf("\nEnter Number Of Nodes :");
    scanf("%d",&n);
    printf("\nEnter root data: ");
    scanf("%d",&x);
root=(struct tbtnode *)malloc(sizeof(struct tbtnode));
     root->data=x;
     root->lbit=root->rbit=1;
     root->child=0;
     root->left=head->left;
     head->left=root;
     head->lbit=0;
     root->right=head->right;
     for(i=0;i<n-1;i++)
      create(root);
      break;
    case 2:
    printf("\nInorder Traversal Is:\n");
      inorder1(head);
      break;

    case 3: printf("Enter the node to which successor is to be found\n");
            scanf("%d",&item);
            inorder_successor(head,item);
            break;
    case 4:
      return(0);
      break;
    }
 }while(op<=4);
return 0;
}
