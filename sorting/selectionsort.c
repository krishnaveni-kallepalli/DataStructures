#include<stdio.h>
void selection(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		
	}
	printf("Elements afrer sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int main()
{
	int a[100],i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	selection(a,n);
	
}
