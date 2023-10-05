#include<stdio.h>
#include<conio.h>

void main()
{
int marks;
	printf("Enter Your Marks\n");
    //	int marks;
	scanf("%d",&marks);

	switch(marks/10)
	{
	   case 10:
	   case 9:
	   printf("Distinction");
	   break;

	   case 8:
	   case 7:
	   case 6:
	   printf("First Class");
	   break;

	   case 5:
	   case 4:
	   printf("Pass");
	   break;
	   case 3:
	   case 2:
	   case 1:
	   case 0:
	   printf("Fail");
	   break;

	   default:
	   printf("Enter Valid Marks");
	   break;
	}


	getch();
	clrscr();
}