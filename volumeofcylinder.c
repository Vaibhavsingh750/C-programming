#include<stdio.h>
int main()
{
	int radius,height;
	float pi=3.14,volume;
	printf("Enter the radius: ");
	scanf("%d",&radius);
	printf("Enter the height: ");
	scanf("%d",&height);
	
	volume = pi*radius*radius*height;
	
	printf("Volume of cylinder is: %f",volume);
	return 0;
	
}
