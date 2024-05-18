#include<iostream>

using namespace std;

class eml
{
	public:
		int age;
	
	public:
		void setdata()
		{
			cout << "Enter Employee age :" ;
			cin >> age;
			
		}
		void getdata()
		{
			cout << "Employee age : " << age ;
		}
		
		eml operator - (eml e2)
		{
			eml e3;
			e3.age = age - e2.age;
			return e3;
			
		}
	
};
