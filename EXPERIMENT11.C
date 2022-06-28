/*Write a menu-based program to perform operations on a binary search tree (BST). a) Search an element b) Find minimum and maximum element c) Insertion of an element d) Deletion of an element*/
#include <stdio.h>
#include <conio.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};
struct node *newNode;
struct node *temp;
struct node insert(struct node *root, int x)
{
    temp = root;
    struct node *y;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->left = newNode->right = NULL;
    while (temp != NULL)
    {
        y = temp;
        if (temp->info < newNode->info)
            temp = temp->right;
        else
            temp = temp->left;
    }
    if (newNode->info < y->info)
        y->left = newNode;
    else
        y->right = newNode;
}
void display(struct node* root)
{
    if (root != NULL) {
        display(root->left);
        printf("%d \n", root->info);
        display(root->right);
    }
}
int main()
{
    int data;
    struct node *root = NULL;
    while (1)
    {
        int choice;
        int data;
        printf("Press 1 for insert in queue\n");
        printf("Press 2 for delete in queue\n");
        printf("Press 3 for show the data in queue\n");
        printf("Press any key for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the node to be insert\t");
            scanf("%d", &data);
            insert(root, data);
            break;
        case 2:
            // dequeue();
            break;
        case 3:
            display(root);
            break;

        default:
            exit(0);
        }
    }
    return 0;
}