#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int x[size],i,j,temp,*ptr;
	clrscr();
	ptr=x;
	for(i=0;i<size;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
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
	getch();
}


