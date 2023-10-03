#include<stdio.h>

//Logical Operators
	// 1 		AND
	//	c1		c2		result
	//	true	true	true
	//	true	false	false
	//	false 	true	false
	//	false 	false	false
	
	//	2		OR
	//	c1		c2		result
	//	true	true	true
	//	true	false	true
	//	false 	true	true
	//	false 	false	false



main()
{
	int marks;
		scanf("%d",&marks);
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
		printf("Enter Valid marks");
	}
}