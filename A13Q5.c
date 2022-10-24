#include<stdio.h>
int main()
{
	int a,b,c,sets;
	printf("enter the lengths\n");
	scanf("%d",&sets);
	scanf("%d%d%d",&a,&b,&c);
	switch(sets)
	{
		case 1:
			printf("enter the length of the triangles\n");
			if(a==b||a==c||b==c)
			{
				printf("ISOSECLES TRIANGLE\n");
			}
			else
			{
				printf("not ISOSECLES TRIANGLE\n");
			} break;
			
		case 2:
			printf("enter the length of the triangle\n");
			if(a*a==b*b+c*c)
			{
				printf("RIGHT ANGLE TRIANGLE\n ");
			}
			else 
			{
				printf(" not right angle triangle\n");
			} break ;
		
		case 3:
			printf("enter the length of triangles\n");
			if(a==b==c)
			{
				printf("EQUAIRATERAL TRIANGLE\n");
				
			}
			else 
			{
				printf("not an equilateral triangle\n");
			} break ;
		
		case 4:
			printf("EXIT");
			break ;
			
			
			
	}
}
