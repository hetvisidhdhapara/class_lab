#include<stdio.h>
#include<conio.h>

void main()
{
	int i,srch,first=0,count=0,last=9,x[10],mid=(first+last)/2,flag=0;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\tenter search value:");
	scanf("%d",&srch);
	while(first<=last && flag==0)
	{
		if(srch==x[mid])
		{
			printf("\n\tvalue found");
			flag=1;
		}
		else if(srch<x[mid])
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		else
		{
			first=mid+1;
			mid=(first+last)/2;
		}
		count++;
	}
	if(flag==0)
	printf("\n\tvalue not found");
	printf("\n%d",count);
	getch();
}