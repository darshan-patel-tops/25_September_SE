#include<stdio.h>




main()
{
		char name;
		
		printf("Enter Your name \n");
		scanf("%c",&name);
		printf("Your name is %c \n",name);	
		
		
		
		//buffer value generate
		
		fflush(stdin);

		int number;
		printf("Enter A number\n");
		scanf("%d",&number);
		printf("You entered %d\n",number);
		
		fflush(stdin);
		
		char day;
		printf("Enter A Day \n");
		scanf("%c",&day);
		
		
			switch(day)
			{
				case 'm':
					printf("Monday");
					break;
				case 't':
					printf("Tuesday");
					break;
				case 'w':
					printf("Wednesday");
					break;
				case 'T':
					printf("Thursday");
					break;
				case 'f':
					printf("Friday");
					break;
				case 's':
					printf("Saturday");
					break;
				case ' ': // you can also use space in a case
					printf("Sunday");
					break;
					
					
				default:
					printf("Enter A Valid day\n");
			}
		
		}