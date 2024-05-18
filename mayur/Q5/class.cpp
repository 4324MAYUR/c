#include<iostream>

using namespace std;

class mathoperations 
{
	private:
		int a,b;
		
	public:
		void setdataa()
		{
			cout << "Enter A :" ;
			cin >>a;
			cout << endl << "Enter B :" ;
			cin >> b;
			
			
			try
			{
				if(0>=b)
				{
					throw b ;
				}
				else
				{
					cout << endl << endl << "Anser :" << a/b ;
				}
			}
			
			catch(int n)
			{
				cout << endl << endl << " - - - - Not division by zero and negative number  :" ;
			}
		}
	
	
	
};

