#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	struct node *root;
};

struct node *root = NULL;
void create(int d)
{
	struct node *new = malloc(sizeof(struct node));
	
	new->data = d ;
	new->left = NULL;
	new->right  = NULL;
	
	if(root == NULL)
	{
		root = new;
	}
	else 
	{
		if(d < root->data)
		{
			root->left = new;
			new->left = root;
			new->right = NULL;
		}
		else if(d > root->data)
		{
			root->right  = new;
			new->left = root;
			new->right = NULL;
		}
	}
	
}
int main()
{
	int i,n,data;
	printf("Enter no of elelemts:\n");
	scanf("%d",&n);
	
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		create(data);
	}
	/*
	printf("Entered elements are:\n");
	for(i=0;i<n;i++)
		printf("%d",&data);
	*/
		
}

