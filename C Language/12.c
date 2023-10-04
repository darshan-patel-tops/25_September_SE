#include<stdio.h>


main()
{
	
		int choice;
//		int choice; this is not valid
//choice =5; this is valid
		printf("Welcome \n    1) Iphone \n 2) Samsung");
		printf("\n Enter your Choice\n");
		scanf("%d",&choice);
		printf("\n You entered 1st choice %d",choice);
			
			if(choice == 1)
			{
				printf("\nIphone");
				int choice;
				printf("\n1) Iphone15 \n 2) Iphone14 \n");
				printf("\nEnter Your choice\n");
				scanf("%d",&choice);
				if(choice == 1)
				{
					printf("\n15");
					
					printf("\n Price is 100000");
					printf("\nYou want to buy????");
					
					int choice;
					printf("\nEnter your choice\n");
					scanf("%d",&choice);
					if(choice ==1)
					{
						printf("Done");
					}
					else if(choice ==2)
					{
						printf("Not bought");
					}
					else
					{
						printf("Enter Valid number");
					}
				}
				else if(choice == 2)
				{
					printf("\n14");
				}
				else
				{
					printf("Sahi input dalo ");
				}
			}
			else if(choice == 2)
			{
				printf("\nSamsung\n");
				printf("\n1) S23 \n 2) S22 \n");
				printf("\nEnter Your choice\n");
				scanf("%d",&choice);
				if(choice == 1)
				{
					printf("\n23");
				}
				else if(choice == 2)
				{
					printf("\n22");
				}
				else
				{
					printf("Sahi input dalo ");
				}
			}
			else
			{
				printf("Please enter valid value");
			}
			
			
		printf("\n You entered  choice %d",choice);
}