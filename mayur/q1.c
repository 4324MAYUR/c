#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	int f;
	
	for(i=1;i<=n;i++)
	{
	   f = (n+i+2) * (n+i);
	}
	
	
	printf("your factorial number :%d",f);

}
