#include<stdio.h>
int main()
{
	int n,i;
	int first=0,second=1,next=first+second;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("\nFIBONACCI SERIES:\n");
	for (i=0;i<=n;i++)
	{
		if (i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
	printf("%d ",next);
}
return 0;
}