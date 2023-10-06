#include<stdio.h>



main()
{
	
	
	int num1;
	int num2;
	
	
	printf("Enter Num1 \n");
	scanf("%d",&num1);
	printf("Enter Num2 \n");
	scanf("%d",&num2);
	
	
	printf("Before Swapping \nNum 1 is %d Num 2 is %d\n\n\n",num1,num2);
	
	
			num1 = num1 + num2;
			num2 = num1 - num2;
			num1 = num1 - num2;
			
			
			printf("After Swapping Num 1 is %d Num 2 is %d",num1,num2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}