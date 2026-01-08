#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,*ptr,n1,n2;
	clrscr();
	printf("enter no. of elements: ");
	scanf("%d",&n1);
	ptr=(int *)malloc(n1*sizeof(int));
	for(i=0;i<n1;i++)
	{
		printf("enter value %d :",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n1;i++)
	{
		printf("\n\n\t%d):%d",i+1,*(ptr+i));
	}
		printf("\n\n\tenter no. of new elements: ");
	scanf("%d",&n2);
	ptr=(int *)realloc(ptr,n1*sizeof(int));
	for(i=n1;i<n2;i++)
	{
		printf("enter value %d :",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n2;i++)
	{
		printf("\n\n\t%d):%d",i+1,*(ptr+i));
	}
	free(ptr);
	getch();
}