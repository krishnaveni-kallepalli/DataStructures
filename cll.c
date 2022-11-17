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
void insert_middle(int data)
{
	struct node *new = malloc(sizeof(struct node *));
	struct node *p,*q;
	p = head;
	q = head;
	new->data = data;
	new->link = NULL;
	while(q != NULL && q->link != head)
	{
		q = q->link->link;
		p = p->link;
	}
	printf("Middle node is : %d\n",p->data);
	new->link  = p->link;
	p->link  = new;
}
void insert_pos(int data,int pos)
{
	struct node *new = malloc(sizeof(struct node *));
	struct node *ptr = head;
	new->data = data;
	new->link = NULL;
	pos--;
	while(pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	new->link  = ptr->link;
	ptr->link  = new;
}
void find_middle()
{
	struct node *p,*q;
	q = head->link;
	p = head;
	while(q!= NULL && q->link != head)
	{
		q = q->link->link;
		p = p->link;
	}
	printf("Middle Node is : %d\n",p->data);
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
	int n,i,data,d,ch,pos;
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
	printf("1.Insert at begining\n2.Insert at end\n3.Insert at middle\n4.Insert at position\n5.Find middle\n");
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
			break;
		case 2:
			printf("Enter data:");
			scanf("%d",&data);
			insert_end(data);
			printf("Display:\n");
			display();
			break;
		case 3:
			printf("Enter data:");
			scanf("%d",&data);
			insert_middle(data);
			printf("Display:\n");
			display();
			break;
		case 4:
			printf("Enter data:");
			scanf("%d",&data);
			printf("Enter pos:");
			scanf("%d",&pos);
			insert_pos(data,pos);
			printf("Display:\n");
			display();
			break;
		case 5:
			find_middle(data);
			break;
		default:exit(0);
	}
}
