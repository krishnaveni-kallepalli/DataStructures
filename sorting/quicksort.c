#include<stdio.h>
void quick(int a[],int lb,int ub)
{
	int start,end,temp,pivot;
	if(lb<ub)
	{
		pivot = lb;
		start = lb;
		end = ub;
		while(start<end)
		{
			while(a[pivot] >= a[start])
				start++;
			while(a[end] > a[pivot])
				end--;
			if(start < end)
			{
				temp = a[start];
				a[start] = a[end];
				a[end] = temp;
			}	
		}
		temp = a[pivot];
		a[pivot] = a[end];
		a[end] = temp;
		quick(a,lb,end-1);
		quick(a,end+1,ub);
	}
	
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
	
	quick(a,0,n-1);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
