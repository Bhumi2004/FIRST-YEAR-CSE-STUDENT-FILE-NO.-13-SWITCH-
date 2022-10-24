#include<stdio.h>
int main()
{
	int a,b,c,equation;
	printf("enter the quardatic equation\n ");
	scanf("%d",&equation);
	scanf("%d%d%d",&a,&b,&c);
	b*b-4*a*c;
	switch(equation)
	{
		case 1:
		if(b*b-4*a*c==0)
		{
			printf("EQUAL ROOTS!!\n");
			
		}
		else 
		{
			printf("NOT AN EQUAL ROOT!!\n");
		}break;
			
	    case 2:
	    if(b*b-4*a*c>0)
	    {
	    	printf("UNEQUAL ROOT\n");
		}
		else
		{
			printf("NOT UNEQAL ROOTS \n");
		}
		break ;
		
		case 3:
		if(b*b-4*a*c<0)
		{
			printf("IMAGINARY ROOT/NON-REAL ROOT\n");
		}
		else
		{
			printf("NOT IMAGINARY ROOT/NON-REAL ROOT\n");
		}
		break ;
		
		case 4:
		if(b*b-4*a*c>=0)
		{
			printf("REAL ROOTS\n");
		}
		else 
		{
			printf("NOT REAL ROOTS\n");
} 
}}
	
