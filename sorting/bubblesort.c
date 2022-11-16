#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("Elements After sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int main()
{
	int a[100],i,n;
	printf("Enter size of the array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	bubble(a,n);
}
