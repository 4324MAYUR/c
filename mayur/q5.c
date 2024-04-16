#include<stdio.h>
 
  swap(int *a,int *b)
  {
  	int c;
  	
  	 c = *a;
  	*a = *b;
  	*b =  c;
  	
  }

main()
{

  int a,b;
   
   printf("Enter A  of number :");
   scanf("%d",&a);
   
   printf("Enter B  of number :");
   scanf("%d",&b);
   
   	printf("\n\n");
   swap(&a,&b);
   
   printf("A of number : %d\n",a);
   printf("B of number : %d",b);

}
