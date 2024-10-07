#include<stdio.h>
int main()
{
	int sum=0,maths,sci,sst,eng,hindi,comp;
	float avg;
    printf("Enter the marks of Maths: ");
	scanf("%d",&maths);
	printf("Enter the marks of Science: ");
	scanf("%d",&sci);
	printf("Enter the marks of Social Studies: ");
	scanf("%d",&sst);
	printf("Enter the marks of English: ");
	scanf("%d",&eng);
	printf("Enter the marks of Hindi: ");
	scanf("%d",&hindi);
	printf("Enter the marks of Computer: ");
	scanf("%d",&comp);
	
	sum = maths+sci+sst+eng+hindi+comp;
	avg = sum/6;
	
	if(maths<35||sci<35||sst<35||eng<35||hindi<35||comp<35)
	{
		printf("Result : Fail");
	}
	else if(avg>34 && avg<50)
	{
		printf("Result : Third Division");
	}
	else if(avg>49 && avg<60)
	{
		printf("Result : Second Division");
	}
	else if(avg>60 && avg<75)
	{
		printf("Result : First Division");
	}
	else 
	{
		printf("Result : Distinction");
	}
	
	printf("\nTotal marks is: %d \nAverage is: %f",sum,avg);
	return 0;
}
