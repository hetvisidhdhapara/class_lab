#include<stdio.h>
#include<conio.h>
void xyz(int,int);
void main()
{
	int x,y;
	clrscr();
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	xyz(x,y);
	getch();
}
void xyz(int x,int y)
{
	int z;
	z=x+y;
	printf("sum=%d",z);
}