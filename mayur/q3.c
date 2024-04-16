#include<stdio.h>
main()
{
	int i,j,s,n=5;
	
	for(i=0;i<n;i++)
	{
		for(s=1;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=i+1;j>=1;j--)
		printf("*");
		
		printf("\n");
	}
	
}
