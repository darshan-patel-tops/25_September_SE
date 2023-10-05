#include<stdio.h>
#include<conio.h>


void main()
{
  //	getch();
//	clrscr();


	int number;
	printf("Enter Your Choice \n");
	scanf("%d",&number);


	/*
	switch(condition)
	{
		case :
		statement
		break;

		default :
		statement
		break;
	}


	*/

	switch(number)
	{
		case 1:
		printf("You Choose 1\n");
		break;
		case 2:
		printf("You Choose 2\n");
		break;
		case 3:
		printf("You Choose 3 \n");
		break;

		default:
		printf("Enter Valid choice");


	}



    getch();
    clrscr();


}