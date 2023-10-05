#include<stdio.h>




main()
{
	
	int choice;
	
	
	printf("Welcome to our website\n");
	printf("We have few options for you\n");
	printf("1 Clothes\n");
	printf("2 Electronics \n");
	printf("3 Shoes \n");
	printf("4 Furniture \n");
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	
	
	if(choice == 1)
	{
		int choice2;
		printf("Clothes Section\n");
		printf("1 T-shirt\n");
		printf("2 Shorts\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice2);
		
		if(choice2 == 1)
		{
			
			int price=500;
			int quantity;
			int total=0;
			printf("T-shirts");
			
			printf("Good Choice\n");
			printf("Cost of one t-shirt is 500\n");
			printf("Enter Your Quantity \n");
			scanf("%d",&quantity);
			
//			total = price*quantity;
			
//			printf("Your Total is: %d \n",total);
			printf("Your Total is: %d \n",price*quantity);
			
			printf("Please Choose your payment method\n");
			printf("1 COD\n");
			printf("2 CC\n");
			printf("3 DC\n");
			int payment;
			scanf("%d",&payment);
			
			if(payment == 1)
			{
				printf("Paise time se de dena\n");
			}
			else if(payment == 2)
			{
				printf("CC\n");
			}
			else if(payment == 3)
			{
				printf("DC\n");
			}
			else
			{
				printf("Enter Valid choice");
			}
			
			
			
			
			
			
		}
		else if(choice2 == 2)
		{
			printf("Shorts");
		}
		else
		{
			printf("Enter Valid choice");
		}
		
		
		
	}
	
	
	
	
}