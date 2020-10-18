#include<stdio.h>
struct node
{ int data;
  struct node *next;
}*head;
void createLinkedlist(int n);
void del_firstnode();
void display();
void createLinkedlist(int n)
{ struct node *newNode,*temp;
  int data,i;
  head=(struct node *)malloc(sizeof(struct node));
  if(head==NULL)
  { 
    printf("Unable to allocate memory");
  }
  else 
  { printf("Enter data for NODE 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    
    for(i=2;i<=n;i++)
    { newNode=(struct node *)malloc(sizeof(struct node));
      if(newNode==NULL)
      { printf("Unable to allocate memory");
      break;}
      else
      { 
        printf("Enter the data of new node %d",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;
      }
    }
    printf("Linked list created\n");
      }
    }
    void del_firstnode()
    { struct node *delnode;
      if(head==NULL)
      { printf("List is already empty");
      }
      else
      { delnode=head;
        head=head->next;
        printf("\nData deleted=%d\n",delnode->data);
        free(delnode);
        printf("First node successfully deleted");
      }
    }
    void display()
    { struct node *temp;
      if(head==NULL)
      {printf("List is empty");
      }
      else
      { temp=head;
       while(temp!=NULL)
       { printf("Data=%d\n",temp->data);
         temp=temp->next;
       }
      }
    }
int main()
{   int n,data,key;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    createLinkedlist(n);
    printf("Enter the data to be inserted at beginning\n");
    scanf("%d",&data);
    printf("To display linked list press 0\n");
    scanf("%d",&key);
    if(key==0)
    { display(); 
    }
    printf("To delete node at the beginning press 1\n");
    if(key==1)
    {
    del_firstnode();
    }
    return 0;
    
}
