#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *rightlink;
	struct Node *leftlink;
};
struct Node *header = NULL;
struct Node *CreateNode(int data)
{
	struct Node *newnode;
	newnode = malloc(sizeof(struct Node));
	newnode -> data = data;
	newnode -> leftlink = NULL;
	newnode -> rightlink = NULL;
	return(newnode);
}
void insertAtFront(int data)
{
	struct Node *newnode;
	if(header==NULL)
	{
		newnode = CreateNode(data);
		header=newnode;
	}
	else
	{
		newnode = CreateNode(data);
		newnode -> leftlink = header;
		header-> rightlink = newnode;
		header=newnode;


	}
}

void traversal()
{
	struct Node *ptr;
	ptr = header;
	while(ptr != NULL)
	{
		printf("%d\t",ptr -> data);
		ptr = ptr -> rightlink;
	}
	printf("\n");
}

void insertAtEnd(int data)
{
	struct Node *newnode;
	newnode = CreateNode(data);

	if(header == NULL)
		header = newnode;
	else
	{	struct Node*ptr = header;		
		while(ptr -> leftlink != NULL)
		ptr = ptr -> leftlink;
		ptr -> rightlink = newnode;
	}
}

void deleteAtFront()
{
	struct Node *ptr;
	ptr = header;
	header = ptr -> rightlink;
	free(ptr);
}
	
int main()
{
	insertAtFront(50);
	insertAtEnd(42);
	deleteAtFront(50);
	traversal();
	

}


