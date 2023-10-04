#include<stdio.h>



main()
{
	
//	int besan=1;
	int saman=1;
	int eater=0;
	int cook=1;
	int weather=1;
	
	if(weather)
	{
		if(cook)
		{
			if(eater)
			{
				if(saman)
				{
					printf("Bhajiya");
				}
				else
				{
					printf("No saman");
				}
			}
			else
			{
				printf("No Eater");
			}
		}
		else
		{
			printf("No Cook");
		}
	}
	else
	{
		printf("False");
	}
	
	
}