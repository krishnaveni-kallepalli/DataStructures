#include<stdio.h>
void insertion(int a[10],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp = a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
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
		
	insertion(a,n);
	
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
