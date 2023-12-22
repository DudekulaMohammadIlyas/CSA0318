#include<stdio.h>
int main()
{
	int a[10],i,inpos,value,n,depos,select;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("\nenter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nselect any option:\n");
	printf("\n1.display\n2.insert\n3.delete\n");
	scanf("%d",&select);
	switch (select)
 {
	case 1:
	printf("\ndisplaying array elements:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
     break;
    case 2:
	printf("\nenter the position where you want to insert:\n");
	scanf("%d",&inpos);
	printf("\nenter the value to be inserted:\n");
	scanf("%d",&value);
	for (i=n-1;i>=inpos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[inpos-1]=value;
	printf("\narray after inserting element:\n");
	for (i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
      break;
   case 3:
	printf("\nenter the position of element you want to delete:\n");
	scanf("%d",&depos);
	for (i=depos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
		printf("\narray after deleting element:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
     break;
 }
	return 0;
}