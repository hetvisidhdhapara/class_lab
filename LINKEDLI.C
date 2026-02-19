#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n1)add data");
		printf("\n2)disp data");
		printf("\n3)exit");
		printf("\n4)search data");
		printf("\n5)count record");
		printf("\n6)remove data");
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
				exit(0);

			case 4:
				src();
				break;

			case 5:
				printf("\n\ttotal record:%d ",count);

			case 6:
				del();

			default:
				printf("\n\tinvalid choice...");
		}
	}
	getch();
}