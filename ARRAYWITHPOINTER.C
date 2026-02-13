#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,*ptr;
	clrscr();
	ptr=x;
	for(i=0;i<5;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t%u:%d",ptr,*(ptr+i));
	}
	getch();
}
