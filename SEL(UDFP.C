#include<stdio.h>
#include<conio.h>
#define size 10
void xyz(int*);
void main()
{
	int x[size],i;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	xyz(x);
	getch();
}
void xyz(int *ptr)
{
	int j,i,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\n\t%d):%d",i+1,*(ptr+i));
	}

}