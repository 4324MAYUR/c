#include<stdio.h>

void main()
{
	
	FILE *ptr;
	FILE **wptr;
	
	ptr = fopen("readfile.txt","r");
	wptr = fopen("mayurfile.txt","w");	
	
	char ch[50];

	if(ptr==NULL)
	{
		printf("Your file is not open  :");
	}
	else
	{
		printf("Your file open successfully :\n\n");
		
        fscanf(ptr,"%s",&ch);
        printf("%s",ch);
        
        fprintf(*wptr,"%s",ch);
        
	}	
}
