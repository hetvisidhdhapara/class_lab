#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int tos=-1,x[size];
void add()
{
	if(tos<size-1)
	{
	tos++;
	printf("enter the value:");
	scanf("%d",&x[tos]);
	printf("\n\t value inserted..");
	}
	else
	{
		printf("\n\tstack is full...");
	}
}
void disp()
{
	if(tos==-1)
	{
		printf("\n record is not found..");
	}
	else
	{
		int i;
		for(i=0;i<=tos;i++)
		{
			printf("\n\t%d",x[i]);
		}
	}
}
void del()
{
	if(tos==-1)
	{
		printf("\n\tstack is empty..");
	}
	else
	{
		printf("value %d is removed",x[tos]);
		tos--;
	}

}
void srch()
{

}
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		clrscr();
		printf("\n1) add data");
		printf("\n2) display data");
		printf("\n3) remove data");
		printf("\n4) search data");
		printf("\n5) exit");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				del();
				break;
			case 4:
				srch();
				break;
			case 5:
				exit(0);
			default:
				printf("\n\tinvalid choice:");


		}
		getch();
	}

}