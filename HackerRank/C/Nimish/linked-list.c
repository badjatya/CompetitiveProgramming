#include <stdio.h>
#include <stdlib.h>
void createData(int n);
void displayData(struct Node *temp);
int enterSize();
void insertAtBegin();
void insertAtlast(struct Node *temp);
struct Node
{
    int data;
    struct Node *link;
} * start;
typedef struct Node node;

int enterSize()
{
    int n;
    printf("Enter the size of list : ");
    scanf("%d", &n);
    return n;
}
void createData(int n)
{
    int dt;
    node *newnode, *temp;
    temp = (node *)malloc(sizeof(node));
    start = (node *)malloc(sizeof(node));
    printf("Enter data no. 1 : ");
    scanf("%d", &start->data);
    start->link = NULL;
    temp = start;
    if (start == NULL)
        exit;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (temp == NULL)
                exit;
            else
            {
                newnode = (node *)malloc(sizeof(node));
                printf("Enter data no. %d : ", i);
                scanf("%d", &dt);
                newnode->data = dt;
                newnode->link = NULL;
                temp->link = newnode;
                temp = temp->link;
            }
        }
    }
}
void displayData(node *temp)
{
    int i = 1;
    while (temp != NULL)
    {
        printf("\ndata no. %d : %d", i, temp->data);
        temp = temp->link;
        i++;
    }
}
void insertAtBegin()
{
    int c;
    printf("\n\nPress 1 to insert data at begining of list : ");
    scanf("%d", &c);
    if (c == 1)
    {
        node *newnode;
        if (newnode == NULL)
            exit;
        else
        {
            newnode = (node *)malloc(sizeof(node));
            printf("\nPlease enter data : ");
            scanf("%d", &newnode->data);
            newnode->link = start;
            start = newnode;
            displayData(start);
            printf("\n*************done************");
        }
    }
}
void insertAtlast(node *temp)
{
    int d;
    printf("\n\nPress 1 to insert data at the end of list : ");
    scanf("%d", &d);
    if (d == 1)
    {
        node *newnodel;
        if (newnodel == NULL)
            exit;
        else
        {
            newnodel = (node *)malloc(sizeof(node));
            printf("\nPlease enter data : ");
            scanf("%d", &newnodel->data);
            while (temp->link != NULL)
                temp = temp->link;
            temp->link = newnodel;
            newnodel->link = NULL;
            displayData(start);
            printf("\n*************done************");
        }
    }
}
int main()
{

    int n = enterSize();
    createData(n);
    displayData(start);
    insertAtBegin();
    insertAtlast(start);
    return 0;
}