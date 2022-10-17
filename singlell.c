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
void insert_begining(int d)
{
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = d;
	newnode->link = NULL;
	
	newnode->link = head;
	head = newnode;
	//display();
}
void insert_end(int d)
{
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = d;
	newnode->link = NULL;
	
	struct node *ptr = head;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = newnode;
}
void insert_pos(int d,int pos)
{
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = d;
	newnode->link = NULL;
	
	pos--;
	struct node *ptr = head;
	while(pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	newnode->link = ptr->link;
	ptr->link = newnode;
}
void insert_middle(int d)
{
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = d;
	newnode->link = NULL;
	
	struct node *q = head->link;
	struct node *p = head;

	while(q != NULL && q->link != NULL)
	{
		q = q->link->link;
	 	p = p->link;
	}
	newnode->link = p->link;
	p->link = newnode;
	 
}
void find_middle()
{
	 struct node *q = head;
	 struct node *p = head;

	 while(q != NULL && q->link != NULL)
	 {
	 	q = q->link->link;
	 	p = p->link;
	 }
	 printf("Middle node is : %d\n",p->data);
}
void delete_begin()
{
	if(head == NULL)
		printf("NO nodes");
	else
	{
		struct node *ptr = head;
		head = ptr->link;
		free(ptr);
		ptr = NULL;
	}
	
}
void delete_end()
{
	struct node *ptr = head;
	
	while(ptr->link->link != NULL)
	{
		ptr = ptr->link;
	}
	free(ptr->link->link);
	ptr->link = NULL;
}
void delete_middle()
{
	struct node *new = head;
	struct node *q = head;
	struct node *p = head;
	while(q != NULL && q->link != NULL)
	{	q = q->link->link;
	 	p = p->link;
	}
	new->link->link=p->link;
	free(p);
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
int main()
{
	//struct node *head = malloc(sizeof(struct node));
	struct node *ptr = head;
	int n,i,data,d,ch,pos;
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
	display();
	*/
	while(1)
	{
	printf("\n1.Insert at begining\n2.Insert at end\n3.Insert at position\n4.Find middlenode\n5.Insert at middle\n6.Delete at begining\n7.Delete at end\n");
	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter data:\n");
			scanf("%d",&d);
			insert_begining(d);
			printf("Display\n");
			display();
			break;
		case 2:
			printf("Enter data:\n");
			scanf("%d",&d);
			insert_end(d);
			printf("Display\n");
			display();
			break;
		case 3:
			printf("Enter position\n");
			scanf("%d",&pos);
			printf("Enter data:\n");
			scanf("%d",&d);
			insert_pos(d,pos);
			printf("Display\n");
			display();
			break;
		case 4:
			find_middle();
			break;
		case 5:
			printf("Enter data:\n");
			scanf("%d",&d);
			insert_middle(d);
			printf("Display\n");
			display();
			break;
		case 6:
			delete_begin();
			printf("Display\n");
			display();
			break;
		case 7:
			delete_end();
			printf("Display\n");
			display();
		case 8:
			delete_middle();
			printf("Display\n");
			display();
		default:
			exit(0);
	}
	}
}

