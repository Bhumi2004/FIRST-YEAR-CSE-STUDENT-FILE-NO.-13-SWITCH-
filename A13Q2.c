#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("enter the two integer\n");
	scanf("%d%d",&a,&b);
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			c=a+b;
			printf("add=%d",c);
			break;
	    case 2:
	    	c=a-b;
	    	printf("difference=%d",c);
	    	break;
	    case 3:
	    	c=a*b;
	    	printf("product=%d",c);
	    	break;
	    case 4:
	    	c=a/b;
	    	printf("divide=%d",c);
	    	break;
	    default:
	    	printf("exit\n");
	    	break;
	
		
	    
	    	
		
	}
}
