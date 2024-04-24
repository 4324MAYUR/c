#include<iostream>

using namespace std;

main()
{
	int start , end , size=0;
	cout << "Enter The First Number :" ;
	cin >> start;
	cout << "Enter The End Number  :";
	cin >> end ;
	
	int a[50] , i ;
	for(i=start;i<=end;i++)
	{
		if(i %4== 0)
		{
			a[size] = i ;
			size++;
		}
	}
	
	cout << "\n\nThe Array Is :";
	for(i=0;i<size;i++)
	{
		cout << a[i] << " , " ;
	}
	
	
	
}
