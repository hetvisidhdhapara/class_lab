#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node *next;
};
node *temp;
node *last=NULL;
node *erase;
node *ins;
int count=0;

void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter value:");
	scanf("%d",&temp->data);
	count++;
	printf("\nvalue inserted...");
	if(last==NULL)
	{
		temp->next=temp;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
	}
	last=temp;
}
void disp()
{
	if(last==NULL)
	{
		printf("\n\trecord not found");
	}
	else
	{
		do
		{
			temp=temp->next;
			printf("\n\t\t%d",temp->data);

		}while(temp!=last);

	}
}
void del()
{
	if(last==NULL)
	{
		printf("\n\trecord not found..");
	}
	else
	{
		int dv,flag=0;
		printf("\n\tEnter value for delete:");
		scanf("%d",&dv);
		do
		{
			if(temp->next->data==dv)
			{
				erase=temp->next;
				temp->next=erase->next;
				flag=1;
				if(erase==last)
				{
					if(temp==last)
					{
						last=NULL;
						break;
					}
					else
					{
						last=temp;
					}
				}
			}
			temp=temp->next;
		} while(temp!=last);
		if(flag==0)
		{
			printf("\n\tvalue %d not found",dv);
		}
		else
		{
			printf("\n\t value deleted successfully...");
			count--;
			free(erase);
		}
	}
}
void updt()
{
	if(last==NULL)
	{
		printf("\n\trecord not found");
	}
	else
	{
		int uv,flag=0,sr=1;
		printf("\n enter update value:");
		scanf("%d",&uv);
		do
		{
			temp=temp->next;
			printf("\n\t%d):%d",sr++,temp->data);
			if(temp->data==uv)
			{
				printf("enter new value:");
				scanf("%d",&temp->data);
				flag=1;
			}

		}while(last!=temp);
		if(flag==0)
		{
			printf("\n\tvalue %d not found..",uv);
		}
		else
		{
			printf("value updated..");
		}
	}
}
void insrt()
{

}
void srch()
{
	if(last==NULL)
	{
		printf("\n\trecord not found");
	}
	else
	{
		int sv,flag=0,sr=1;
		printf("\n\tenter serch value:");
		scanf("%d",&sv);
		do
		{
			temp=temp->next;
			printf("\n\t%d):%d",sr++,temp->data);
			if(temp->data==sv)
			{
				printf("<=== value found here");
				flag=1;
			}
		}while(last!=temp);
		if(flag==0)
		{
			printf("\n\tvalue %d not found",sv);
		}
	}
}
void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("\n1)add data");
		printf("\n2)display data");
		printf("\n3)remove data");
		printf("\n4) exit");
		printf("\n5)serch value");
		printf("\n7)insert value");
		printf("\n8)count data");
		printf("\n6)update data");
		printf("\n\tenter your choice:");
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
				exit(0);
			case 5:
				srch();
				break;
			case 6:
				updt();
				break;
			case 7:
				insrt();
				break;
			case 8:
				printf("%d",count);

			default:
				printf("\n\tinvalid choice..");
		}
		getch();
	}

}