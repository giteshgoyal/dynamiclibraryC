#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 

int item; 
struct node* left,*right; 
}; 
struct tbtnode
 {
    int data;
       struct tbtnode *left,*right;
       int lbit,rbit,flag;
       int child;
};

void maketree(int,struct node*); 
void deltree(int,struct node*); 
void inorder(struct node*); 
void preorder(struct node*);
void postorder(struct node*);
struct tbtnode* insuc(struct tbtnode*);  
void inorder1(struct tbtnode*);
void create(struct tbtnode*);
void inorder_successor(struct tbtnode*,int);

