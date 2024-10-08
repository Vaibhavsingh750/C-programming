#include<stdio.h>
int main()
{
	char op;
	float x,y;
	printf("Choose the operator +,-,*,/:  ");
	scanf("%c",&op);
	printf("Enter the first number: ");
	scanf("%f",&x);
	printf("Enter the second number: ");
	scanf("%f",&y);
	
	switch(op)
	{
		case '+' :
			printf("The sum of %.2f and %.2f is: %.2f",x,y,x+y);
			break;
			
		case '-' :
		    printf("The subtraction of %.2f and %.2f is: %.2f",x,y,x-y);
		    break;
			 
		case '*' :
		    printf("The multiplication of %.2f and %.2f is: %.2f",x,y,x*y);
			break;
			
		case '/' :
		    printf("The division of %.2f and %.2f is: %.2f",x,y,x/y);
			break;
			
		default : printf("Invalid input");		 	 	
		
	}
	return 0;
	
}
