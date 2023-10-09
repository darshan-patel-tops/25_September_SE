#include<stdio.h>

main()
{
	
	char name[100];
		
	int age,choice;
	
	
	printf("Enter your full name \n");
	gets(name);
	printf("Enter your age \n");
	scanf("%d",&age);
	
//	printf("Welcome %s to our %s academy",name,name);
	printf("\nWelcome %s to our academy",name);
	printf("\n%s your age is %d",name,age);
	
	printf("\nWhat is your role :\n 1) Batsman 2) Bowler 3) All-Rounder \n");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("\n%s you are Batsman",name);
			
			int runs,notout,match;
			
			printf("\nEnter your match: \n");
			scanf("%d",&match);
			printf("\nEnter your runs: \n");
			scanf("%d",&runs);
			printf("\nEnter how many times you have been not out: \n");
			scanf("%d",&notout);
			
			
			
			float avg=0;
			
			match = match-notout;
			avg = runs/match;
			printf("\n your average is : %f",avg);
	}
	else if(choice == 2)
	{
		int over,runs,wickets;
			
				printf("\nEnter your total overs,runs,wickets \n");
				scanf("%d",&over);
				scanf("%d",&runs);
				scanf("%d",&wickets);
		
			float avg=0;
			
			if(wickets > 0)
			{	
			avg = runs/wickets;
			printf("Your Average is : %f",avg);
			}
			else
			{
				printf("Your average is yet to be calculated as you have no wickets\n");
			}
			
			
			float eco;
				eco =runs/over;
			printf("\nYour Economy is : %f",eco);
				
			
	}
	
	
	
	
	
	
	
}