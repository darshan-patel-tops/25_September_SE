#include<stdio.h>


main()
{
	
	int year;
//	int days = 365;
	printf("Enter Year : ");
	scanf("%d",&year);
	
//	printf("%d",year%4);
	
	if(year%4 == 0 && year%400 != 0)
	{
//		printf("Not A Leap Year");
		printf("Leap Year");
	}
	else
	{
//		printf("Leap Year");
		printf("Not A Leap Year");
	}
	
		
	
	
	
	
}