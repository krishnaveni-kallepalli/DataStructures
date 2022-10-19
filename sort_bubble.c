#include<stdio.h>
void bubble(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[10];
	int n,i,j;
	
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Before sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		
	bubble(a,n);
	
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
