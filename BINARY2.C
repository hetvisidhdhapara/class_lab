#include<stdio.h>
#include<conio.h>
void xyz(int[],int);
void main()
{
	int i,x[10],srch;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("\n\tenter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\t\nenter search value: ");
	scanf("\t%d",&srch);
	xyz(x,srch);
	getch();

}
void xyz(int x[],int srch)
{
	int i,first=0,last=9,mid=(first+last)/2,flag=0,count=0;

	while(first<=last && flag==0)
	{
		if(srch==x[mid])
		{
			printf("\n\t value is found..");
			flag=1;
		}
		else if(srch<x[mid])
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		else
		{
			first=mid+1;
			mid=(first+last)/2;
		}
	       count++;
	}
	if(flag==0)
	printf("\n\tvalue is not found..");
	printf("\n\tcount:%d",count);
}