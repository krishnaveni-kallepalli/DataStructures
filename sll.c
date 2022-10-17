#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head = NULL;
void insert(int data)
{
	struct node *new = malloc(sizeof(struct node));
	if(new == NULL)
	{
		printf("Memory alloction failed\n");
	}
	else
	{
		new->data = data;
		new->link = NULL;
		if(head == NULL)
		{
			head = new;
		}
		else
		{
			struct node *ptr = head;
			while(ptr->link != NULL)
			{
				ptr = ptr->link;
			}
			ptr->link = new;
		}
	}
	
}
void display()
{
	struct node *ptr = head;
	if(head == NULL)
	{
		printf("Empty\n");
	}
	else
	{
		
		while(ptr != NULL)
		{
			printf("%d\n",ptr->data);
			ptr = ptr->link;
		}
	}
}
void insert_begining(int d)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;
	
	ptr->link = head;
	head = ptr;
	//display();
}
int main()
{
	//struct node *head = malloc(sizeof(struct node));
	struct node *ptr = head;
	int n,i,data,d,ch;
	printf("Enter no of nodes :\n");
	scanf("%d",&n);
	printf("Enter data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(data);
	}
	printf("Display\n");
	display();
	/*
	printf("Enter data:\n");
	scanf("%d",&d);
	insert(8);
	insert_begining(d);
	display();*/
	printf("Enter choice:\n1.Insert at begining\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter data:\n");
			scanf("%d",&d);
			insert_begining(d);
			display();
			break;
			
	}
}

