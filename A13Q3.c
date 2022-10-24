#include<stdio.h>
int main()
{
	int burger,french_fries,sandwiches,pizza,choice,quantity,amount;
	printf("\nenter the order from menu!!\n");
	printf("\nBURGER=200rs\n");
	printf("\nFRENCH FRIES=150rs\n");
	printf("\nSANDWICHES=50rs\n");
	printf("\nPIZZA=50rs\n");
	printf("\nEND\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

		printf("enter the number of BURGER you want....\n");
		scanf("%d",&quantity);
        amount=quantity*200;
        printf("YOUR AMOUNT IS %d\n ",amount);
		break;
		
		case 2:
	    
		printf("enter the number of SANDWICHES you want...\n");
		scanf("%d",&quantity);
		amount=quantity*50;
		printf("YOUR AMOUNT IS %d\n",amount);
		break;
		
		case 3:
			
			printf("enter the number of FRENCH FRIES you want... \n");
			scanf("%d",&quantity);
			amount=quantity*150;
			printf("YOR AMOUNT IS %d\n",amount);
			break;
			
	   case 4:
	   	printf("enter the number of PIZZA you want.....\n");
	   	scanf("%d",&quantity);
	   	amount=quantity*50;
	   	printf("YOUR AMOUNT IS %d\n",amount);
	   	break;
	   	
	   	case 5:
	   	printf("END....\n ");
	   	break ;
	   }
}
	   

