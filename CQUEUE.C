#include<stdio.h>
#include<conio.h>
#define size 5
int i,x[size],front=-1,rear=-1;
void add()
{
	if((rear+1)%size==front)
	{
		printf("\nqueue is full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		if(rear<size-1)
		{
			rear++;
		}
		else
		{
			rear=0;
		}
		printf("enter value:");
		scanf("%d",&x[rear]);
		printf("\nvalue inserted..");
	}
}
void disp()
{
	if(rear==-1)
	{
		printf("\nqueue is empty..");
	}
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d",x[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("%d",x[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d",x[i])
			}
		}
	}
}
void del()
{
	if(front==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		printf("\nvalue %d is removed",x[front]);
		front++;
		if(rear==front)
		{
			front=-1;
			rear=-1;
		}
		else if(front<size-1)
		{
			front++;
		}
		else
		{
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