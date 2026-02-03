
#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int x[size],i,j,temp;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\n\t%d):%d",i+1,x[i]);
	}
	getch();
}