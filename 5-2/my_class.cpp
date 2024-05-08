#include<iostream>
using namespace std;

class number
{
	private:
		int n;
	
	public:
		void setdata()
		{
			cout << "Enter Your NUmber :" ;
			cin >> n;
			cout << endl ;
		}
	
		void getdata()
		{
			cout << endl << endl << "---- Your Maximum Number is :" << n <<"  ----";
		}
		
		number operator<(number b)
		{
			if(n < b.n)
			{
				return b;
			}
			else
			{
				b.n = n ;
				return b;
			}
		}
};












