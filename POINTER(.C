#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,*ptr;
	clrscr();
	ptr=&x;
	printf("\nvalue of x: %d",x);
	printf("\naddress of x:%u",&x);
	printf("\nvalue of x:%d",*ptr);
	printf("\naddress of x:%u",ptr);
	getch();
}
