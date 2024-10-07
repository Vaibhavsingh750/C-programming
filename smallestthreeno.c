#include<stdio.h>
int main()
{
	int a,b,c,smallest;
	printf("Enter the three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			smallest=a;
		}
		else
		{
			smallest=c;
	}	}
		
	else
	{
		if(b<c)
		{
			smallest=b;
		}
		else
		{
			smallest=c;
		}
	}	
	
	printf("The smallest no. among %d %d %d is: %d ",a,b,c,smallest);
	return 0;
}
