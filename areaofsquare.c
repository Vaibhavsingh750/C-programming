#include<stdio.h>
int main()
{
	int area,side;
	printf("Enter the side of the square: ");
	scanf("%d",&side);
	
	area = side * side;
	
	printf("Area of square is: %d",area);
	return 0;
}
