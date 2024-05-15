#include <iostream>

using namespace std;

class A
{
	private:
		float a,b;
		
	public:
		void setA()
		{
			cout << "   1) Enter Your first Nnmber :";
			cin >> a;
			
			cout << endl << "   2) Enter Your secound Number :";
			cin >> b;
			
			try
			{
				if(b == 0)
				{
					throw b;
				}
				else 
				{
					cout << endl << endl << " - - - - !! Your Answer : " << a/b ;
				}
		    }
			catch(...)
			    {
				cout << endl << endl << "- - - - Can't Divided by Zero - - - - " << endl ;
		        }	
			
			
		}
		
	
};

class age
{
     private:
     	int age ;
     	
     public:
     	void setage()
     	{
     		cout << endl << endl << "Enter Your Age :" ;
     		cin >> age ;
     		
     		try
     		{
     			if(18>age)
     			{
     				throw 0;
				}
				else 
				{
					cout << endl << endl << "- - - - You Can Vote valied  - - - - " ;
				}
			}
			
			catch (int n)
			{
				cout << endl << endl << "- - - -  You Can Vote After " << 18 - age <<" years"<< endl << endl;
			}
		}
};


