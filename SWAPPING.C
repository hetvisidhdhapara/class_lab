#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,temp;
	clrscr();
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("x=%d and y=%d",x,y);
	getch();
}