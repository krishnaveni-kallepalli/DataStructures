#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *head = NULL;
void create(int data)
{
        struct node *new = malloc(sizeof(struct node *));
        struct node *ptr;
        new->data = data;
        new->link = NULL;

        if(head == NULL)
        {
                head = new;
                new->link =head;
        }
        else
        {
                ptr = head;
                while(ptr->link != head)
                {
                	ptr = ptr->link;
                }
               // new->link = head;
                ptr->link = new;
                new->link = head;
        }
}
void insert_begin(int data)
{
	struct node *new = malloc(sizeof(struct node *));
	struct node *ptr=head;
	new->data = data;
	new->link = NULL;
	printf("Insert %d\n",new->data);
	
	//new->link = head;
	//head = new; 
	while(ptr->link != head)
		ptr = ptr->link;
	ptr->link  = new;
	new->link = head;
	head = new;
}
void insert_end(int data)
{
	struct node *new = malloc(sizeof(struct node *));
	struct node *ptr=head;
	new->data = data;
	new->link = NULL;
	printf("Insert %d\n",new->data);
	while(ptr->link != head)
		ptr = ptr->link;
	ptr->link  = new;
	new->link = head;	
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
		while(ptr->link != head)
		{
			printf("%d\n",ptr->data);
			ptr = ptr->link;
		//	printf("%d\n",ptr->data);
		}
		printf("%d\n",ptr->data);
	}
}
int main()
{
       /*
        int data,n,i;
        printf("Enter no.of elements:\n");
        scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		create(data);
		display();
	}
	printf("result:\n");
	display();
	*/
	struct node *ptr = head;
	int n,i,data,d,ch;
	printf("Enter no of nodes :\n");
	scanf("%d",&n);
	printf("Enter data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		create(data);
	}
	printf("Display\n");
	display();
	printf("1.Insert at begining\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter data:");
			scanf("%d",&data);
			insert_begin(data);
			printf("Display:\n");
			display();
		case 2:
			printf("Enter data:");
			scanf("%d",&data);
			insert_end(data);
			printf("Display:\n");
			display();
		default:exit(0);
	}
}
