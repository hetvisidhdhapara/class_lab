#include<stdio.h>
#include<conio.h>
void main()
{
	int x,*ptr;
	clrscr();
	ptr=&x;
	printf("enter value:");
	scanf("%d",&x);
	printf("\n value of x:%d",*ptr);
	printf("\n\naddress of x:%u",ptr);
	getch();
}