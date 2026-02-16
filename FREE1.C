#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr;
	clrscr();
	printf("enter number of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("\n\t%d):%d",i+1,*(ptr+i));
	}
	free(ptr);
	getch();


}
