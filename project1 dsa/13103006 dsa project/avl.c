#include"tree1.h"  
node *root;
int  avl1()
{ int x,n,i,op;
    do
        {
            printf("\n1)Create:");
            printf("\n2)Insert:");
            printf("\n3)Print:");
            printf("\n4)Quit");
            printf("\nEnter Your Choice : ");
            scanf("%d",&op);
            switch(op)
                {
                case 1:
                    printf("\nEnter no.of elements :");
                       scanf("%d",&n);
                       printf("\n Enter tree data :");
                       root=NULL;
                       for(i=0;i<n;i++)
                       {
                        scanf("%d",&x);
                        root=insert(root,x);
                       }
                       break;
                case 2: 
                       printf("\nEnter a data :");
                       scanf("%d",&x);
                       root=insert(root,x);
                       break;
                
                case 3:    
                       printf("\nPreorder sequence :\n");
                    preorder4(root);
                    printf("\nInorder sequence :\n");
                    inorder4(root);
                    break;
                 }

    }while(op!=4);
}









