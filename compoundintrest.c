#include<stdio.h>
#include<math.h>
int main()
{
	int amount,principal,rate,time,compoundinterest;
	printf("Enter the principal amount: ");
	scanf("%d",&principal);
	printf("Enter the rate: ");
	scanf("%d",&rate);
	printf("Enter the time: ");
	scanf("%d",time);
	
	amount = principal*pow((1+rate/100),time);
 	
	compoundinterest = amount-principal;
	
	printf("The compound interest is %.2f",compoundinterest);
	printf("The total amount after %.2f years is: %.2f\n",time,amount);
	return 0;
	
	
} 
