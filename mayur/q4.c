#include<stdio.h>

main()
{
	int n;
	printf("Enter your year :");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("\n\n\tYour year is leap years .");
	}
	else
	{
		printf("\n\n\tYour year is not leap years .");

	}
}
