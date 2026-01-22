#include<stdio.h>
#include<conio.h>
void xyz();
void main()
{
	clrscr();
	xyz();
	getch();

}
void xyz()
{
	int x[10],srch,i,first=0,last=9,mid=(first+last)/2,flag=0,count=0;
	for(i=0;i<10;i++)
	{
		printf("\n\tenter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\t\nenter search value: ");
	scanf("\t%d",&srch);
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