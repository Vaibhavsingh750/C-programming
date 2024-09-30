#include<stdio.h>
int main()
{
	int phy,che,math,english,hindi,sst,total,percentage;
	printf("Enter the marks of phy: ");
	scanf("%d",&phy);
	printf("Enter the marks of che: ");
	scanf("%d",&che);
	printf("Enter the marks of maths: ");
	scanf("%d",&math);
	printf("Enter the marks of english: ");
	scanf("%d",&english);
	printf("Enter the marks of hindi: ");
	scanf("%d",&hindi);
	printf("Enter the marks of sst: ");
	scanf("%d",&sst);
	
	total=phy+che+math+english+hindi+sst;
	
	printf("The total marks of all subject is: %d\n",total); 
	
	percentage=total/6;
	
	printf("The total percentage of all subject is: %d\n", percentage);
	
	return 0;
}
