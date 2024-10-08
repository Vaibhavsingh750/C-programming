#include<stdio.h>
int main()
{
	float celsius,fahrenhit;
	printf("Enter temperature in celsius: ");
	scanf("%f",&celsius);
	fahrenhit = celsius+9/5+32;
	printf("%.2fCelsius is equal to %.2f Fahrenhit",celsius,fahrenhit);
	return 0;
}
