#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	
	c=a/b;
	
	if(b<0)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("The divison of %d and %d is %d",a,b,c);
	}
	return 0;
	 
}
