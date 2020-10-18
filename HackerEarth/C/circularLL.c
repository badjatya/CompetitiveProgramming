#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*head;

void createList(int);
void insertAtBeginning();
void insertAtEnd();
void deleteAtBeginning();
void deleteAtEnd();
void display();

int main(){
	int n;
	printf("Enter no. of nodes reqd in list: \n");
	scanf("%d",&n);
	createList(n);
	int choice;
    do{
    	printf("\n Menu: Choose a option: \n");
        printf("\n 1. Insert node at beginning \n");
        printf("\n 2. Insert node at end \n");
        printf("\n 3. Delete node at beginning \n");
        printf("\n 4. Delete node at end \n");
        printf("\n 5. Display \n");
        printf("\n 6. exit.\n");
        scanf("%d",&choice);
        switch(choice){
        	case 1: insertAtBeginning();
        	        break;
        	case 2: insertAtEnd();
			        break;
			case 3: deleteAtBeginning();
			        break;
			case 4: deleteAtEnd();
			        break;
			case 5: display();
			        break;
			case 6: exit(0);
			        break;        
			default: printf("\n Enter a valid choice \n");						        
		}
	}while(choice != 6);
}

void createList(int num){
	int data,i;
	struct node *newNode, *temp;
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL){
		printf("\n Unable to allocate memory. \n");
	}
	else{
		printf("\n Enter data for node 1: \n");
		scanf("%d",&data);
		head->data= data;
		head->next= head;
		temp= head;
	}
	for(i=2; i<=num; i++){
		newNode = (struct node *)malloc(sizeof(struct node));
		if(newNode == NULL){
			printf("\n Unable to allocate memory. \n");
		}
		else{
			printf("\n Enter data for node %d: \n",i);
			scanf("%d",&data);
			newNode->data= data;
			newNode->next = head;
			temp->next= newNode;
			temp = temp->next;
		}
	}
	printf("List created successfully");
}

void insertAtBeginning(){
	int data;
	struct node *insert,*temp;
	insert = (struct node *)malloc(sizeof(struct node));
	if(insert == NULL){
		printf("\n Unable to allocate memory. \n");
	}
	else{
		printf("\n Enter data for new node: \n");
		scanf("%d",&data);
		insert->data= data;
		insert->next= head;
		temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		head= insert;
		temp->next= head;
	}
}

void insertAtEnd(){
	int data;
	struct node *insert,*temp;
	insert = (struct node *)malloc(sizeof(struct node));
	if(insert == NULL){
		printf("\n Unable to allocate memory. \n");
	}
	else{
		printf("\n Enter data for new node: \n");
		scanf("%d",&data);
		insert->data= data;
		insert->next= head;
		temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next= insert;
	}
}

void deleteAtBeginning(){
	if(head == NULL){
		printf("Empty List. \n");
	}
	else{
	struct node *del, *temp;
	del = head;
	temp = head;
	while(temp->next != head){
		temp = temp->next;
	}
	head = head->next;
	temp->next = head;
	printf("Data deleted: %d",del->data);
	free(del);
    }
}

void deleteAtEnd(){
	if(head == NULL){
		printf("Empty List. \n");
	}
	else{
	struct node *last, *secondlast;
	last = head;
	secondlast = head;
	while(last->next != head){
		secondlast = last;
		last = last->next;
	}
	if(last == head){
		head = NULL;
	}
	else{
		secondlast->next= head;
	}
	printf("Data deleted: %d",last->data);
	free(last);
    }
}

void display(){
	if(head == NULL){
		printf("Empty List. \n");
	}
	else{
	struct node *temp;
	temp = head;
	while(temp->next != head){
		printf("%d \t", temp->data);
		temp= temp->next;
	}
	printf("%d \n", temp->data);
    }
}
