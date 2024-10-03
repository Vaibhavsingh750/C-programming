#include<stdio.h>
int main()
{
	int length,breadth,area;
	printf("Enter the value of lenght: ");
	scanf("%d", &length);
	printf("Enter the value of breadth: ");
	scanf("%d", &breadth);
	
	area = length*breadth;
	
	printf("The area of rectangle is: %d",area);
	return 0;
}
