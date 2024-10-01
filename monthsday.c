#include<stdio.h>
int main()
{
	int a,year;
	printf("Enter the months number: ");
	scanf("%d",&a);
	
	if(a==2)
	{
		printf("Enter the year: ");
		scanf("%d",&year);
		 
		 if((year%4==0&&year%100!=0)||(year%400==0))
		 {
		 	printf("29 Days in this months");
		 }
		 else
		 {
		 	printf("28 Days in this months");
		 }
}
	else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		printf("31 Days in this months");
	}
	else if(a==4||a==6||a==9||a==11)
	{
		printf("30 Days in this months");
    }	 
    
    else
    {
    	printf("Invalid Input\nplz input between 1 to 12\n__THANKYOU__");
	}
return 0;


	
}
