#include<iostream>

using namespace std;

main()
{
	int size;
    cout << "Enter Array size :" ;
    cin >> size;
    
    int array[size] , i ;
    
    cout << "\n\n--- Array Input --- " << endl ;
    for(i=0;i<size;i++)
    {
    	cout << "a["<< i <<"] :";
    	cin >> array[i] ;
    	
	}
	
	 cout << "\n\n--- Array Output --- " << endl ;
    for(i=0;i<size;i++)
    {
    	cout << "a[" << i <<"]:" << array[i] << endl ;
    	
	}
	
	cout << "   \n Even Elements Of An Array:" << "   ";
	for(i=0;i<size;i++)
    {
    	if(array[i] %2== 0)
    	cout << array[i] << "   ";
    	
	}

}
