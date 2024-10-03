#include<stdio.h>
int main()
{
	int radius;
	float pi=3.14,volume;
	printf("Enter the radius of sphare: ");
	scanf("%d",&radius);
	
	volume = (4.0/3.0)*pi*radius*radius*radius;
	
	printf("The volume of sphare is: %f",volume);
	return 0;
}
