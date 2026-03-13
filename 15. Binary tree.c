#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create()
{
    int x;
    struct node *newnode;

    printf("Enter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1)
        return 0;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;

    printf("Enter left child of %d\n",x);
    newnode->left = create();

    printf("Enter right child of %d\n",x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void main()
{
    struct node *root;

    clrscr();

    printf("Create Binary Tree\n");
    root = create();

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    getch();
}