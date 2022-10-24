#include<stdio.h>
int main()
{
	int a,num;
	printf("enter the number\n");
	scanf("%d",&num);
	scanf("%d",&a);
	switch(num)
    {
    	case 1:
    		printf("enter the positive number before swapping is %d\n",a);
    		printf("enter the number coverted into negative is %d\n",-a);
    		break;
    		
    	case 2:
    		printf("enter the negative number before swapping is %d\n",-a);
    		printf("enter the number converted into positive is %d\n",a);
    		break ;
    		
		}	


}
