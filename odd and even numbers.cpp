#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("\nenter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\neven numbers are:\n");
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\nodd numbers are:\n");
	for (i=0;i<n;i++)
	{
		if (a[i]%2==1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}