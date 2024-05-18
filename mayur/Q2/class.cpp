#include<iostream>

using namespace std;

class car
{
	private:
		int year;
		double speed;
		string model;
		
	public:
		void setdata()
		{
			cout << "Car Information Enter : "<< endl ; 
			cout << "Enter Car Model  :";
			cin >> model;
			cout << "Enter Year :";
			cin >> year;
			cout << "Enter Your Car speed :";
			cin >> speed;
			
			cout << endl << endl ;
		}
		
		void getdata()
		{
			cout << " Your Car Information  : "<< endl ; 
			cout << "Car Model  :" << model <<endl ;
		    cout << "Car year   :" << year <<endl ;
		   	cout << "Car speed  :" << speed <<endl ;


			
			cout << endl << endl ;
		}
		
	
	
};
