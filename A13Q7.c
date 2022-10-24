#include<stdio.h>
int main()
{
	int check,year;
	printf("LETS SEE WHATS YEAR IS NEXT....\n");
	scanf("%d",&check);
	scanf("%d",&year);
	switch(check)
	{
		case 1:
			if(year%4==0)
			{
				printf("LEAP YEAR\n");
				
			}
	
			else
			{
				printf("NOT A LEAP YEAR\n");
				break ;
			}
	}
}
