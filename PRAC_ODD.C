#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int x[size],i;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++)
	{
		if(i%2==1)
		{
			printf("\n%d",x[i]);
		}
	}
	getch();

}