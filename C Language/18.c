#include<stdio.h>


main()
{
	
	
	/*
		conversion type		num1 	num2	result
							int 	float 	data type error/conversion failure
							int 	int 	int
							int 	float	float
							flaot	float 	float
	
	
	
	*/
	
	
	float number;
	
//	printf("Enter A Number \n");
//	scanf("%f",&number);
//	
//	
//	printf("Number you entered is %f",number);
//	printf("Number you entered is %.2f",number);
	
	int num;
	int num2;
	
	
	printf("Enter Num1\n");
	scanf("%d",&num);
	printf("Enter Num2\n");
	scanf("%d",&num2);
	
	printf("Total is %f",num+num2);
//	printf("Total is %d",num+num2);
	
}