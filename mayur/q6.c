#include<stdio.h>

  struct movies
  {
  	 char title;
  	 char genre;
  	 char languager;
  };
main()

{
	int n;
	printf("enter movies size :");
	scanf("%d",&n);
	
	struct movies e[n];
	
	int i;
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		printf("\n\n\t %d movie data :\n",i);

		printf("\nEnter your movie title :");
		scanf("%s",&e[i].title);
		
		printf("Enter your genre :");
		scanf("%s",&e[i].genre);
		
		printf("Enter your languager :");
		scanf("%s",&e[i].languager);
		
	}

//	printf("\n\n");
//	for(i=1;i<=n;i++)
//	{
//		printf("\n\n\t %d movie data information :\n",i);
//
//		printf("\nEnter your movie title : %s",e[i].title);
//		
//		printf("Enter your genre : %s",e[i].genre);
//		
//		printf("Enter your languager : %s",e[i].languager);		
//	}
	
	
}
