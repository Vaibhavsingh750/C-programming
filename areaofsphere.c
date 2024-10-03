#include<stdio.h>
int main()
{
	int radius;
	float pi=3.14,area;
	printf("Enter the radius of sphere: ");
	scanf("%d",&radius);
	
	area = 4*pi*radius*radius;
	printf("Surface area of sphere is: %f",area);
	return 0;
}
