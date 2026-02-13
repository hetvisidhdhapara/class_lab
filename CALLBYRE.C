#include<stdio.h>
#include<conio.h>
void xyz(int*,int*);
void main()
{
	int a,b,*p1,*p2;
	clrscr();
	p1=&a;
	p2=&b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	xyz(p1,p2);
	getch();
}
void xyz(int *p1,int *p2)
{
	int c;
	c=*p1-*p2;
	printf("subtraction=%d",c);
}