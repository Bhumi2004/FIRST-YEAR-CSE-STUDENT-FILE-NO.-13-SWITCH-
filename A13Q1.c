#include<stdio.h>
int main()
{
	int months,days,lp,year;
	printf("enter the month number to find days\n");
	scanf("%d",&months);
	switch(months)
	{
		case 1:
		{
			printf("31days");
			break;
		}
		case 2:
		{
			int lp,year;
			printf("year is leap or not ");
			scanf("%d",&year);
				if(lp==year%4)
			{
				printf("29days");
				break;
				
				
		}
		
				else
			{
				printf("28days");
				break;
			}
		}
		case 3:
			{
				printf("31days");
				break;
			}
		case 4:
			{
				printf("30 days");
				break;
			}
		case 5:
			{
				printf("31 days");
				break;
			}
		case 6:
			{
				printf("30 days");
			    break;
			}
		case 7:
			{
				printf("31 days");
				break;
			}
		case 8:
			{
				printf("31 days");
				break;
			}
		case 9:
			{
				printf("30day");
				break;
			}
		case 10:
			{
				printf("31 days");
				break;
			}
		case 11:
		{
			printf("30 days");
			break;
		}
		case 12:
		{
			printf("31 days");
			break;
		}
		{
			printf("enter the month number from 1-12\n");
			break;
		} 
			
		
	
}
	
	
} 
	//end of switch
