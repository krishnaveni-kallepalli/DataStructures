#include<stdio.h>
void insertion(int a[],int n)
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
		a[j+1]=temp;
	}
	printf("After sorting:\n");
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
	insertion(a,n);
}
