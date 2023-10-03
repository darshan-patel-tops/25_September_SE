#include<stdio.h>
main()
{
	
		int marks;
		scanf("%d",&marks);
	if(marks>=0)
	{
		if(marks>=0 && marks <=33)
	{
		printf("Fail");
	}
	else if(marks>=34 && marks<=50)
	{
		printf("pass");
	}
	else if(marks>=51 && marks<80)
	{
		printf("First class");
	}
	
	else if(marks>=81 && marks<=100)
	{
		printf("Distinction");
	}
	else
	{
		printf("Apsara ke marks nai milte");
	}
	}
	else
	{
		printf("Invalid marks");
	}
}