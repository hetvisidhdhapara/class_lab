#include<stdio.h>
#include<conio.h>
#define size 10
void xyz(int []);
void main()
{
	int x[size],i;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	xyz(x);
	getch();
}
void xyz(int x[])
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\n\t%d):%d",i+1,x[i]);
	}
}