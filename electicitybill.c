#include<stdio.h>
int main()
{
	int final,initial,consumed;
	float total; 
	printf("\nEnter The Initial And Final Readings: ");
	scanf("%d %d",&initial,&final);
	
	consumed = final-initial;
	
	if(consumed<100)
	{
		total=consumed*1.50;
	}
	else if(consumed>=100 && consumed<=199)
	{
		total=consumed*2.50;
	}
	else if(consumed>=200 && consumed<=500)
	{
		total=consumed*3.50;
	}
	printf("The total bill for %d unit is %f : ",consumed,total);
	return 0;	
}
