#include<stdio.h>
#include<conio.h>
#define size 5
int i,x[size],front=0,rear=0;
void add()
{
	if(rear==size)
	{
		printf("queue is full...");
	}
	else
	{
			printf("\nenter value");
			scanf("%d",&x[rear]);
			rear++;
			printf("\n\tvalue inserted..");
	}
}
void disp()
{
	if(rear==0)
	{
		printf("\nvalue not found..");
	}
	else
	{
		for(i=fornt;i<rear;i++)
		{
			printf("%d",x[i]);
		}
	}
}
void del()
{
	if(rear==0)
	{
		printf("\n\tqueue is empty");
	}
	else
	{
		printf("\n\tvalue %d is removed",x[front]);
		front++;
		if(front==rear)
		{
			rear=0;
			front=0;
		}
	}
}
void main()
{
	int ch;
	while(1)
	{
	clrscr();
	printf("\n\t1)add data");
	printf("\n\t2)display data");
	printf("\n\t3)remove data");
	printf("\n\t4)exit");
	printf("enter your choice:");
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
			exit();
		default:
			printf("\ninvalid choice...");
	}
	getch();
}
}