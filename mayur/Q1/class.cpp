#include<iostream>

using namespace std;

class student
{
	private:
		int rollnumber;
		string name;
		
	public:
		student()
		{
			cout << "Enter Rollnumber :";
			cin >> rollnumber;
			cout << "Enter name :";
			cin >> name;
			cout << endl << endl ;
		}
		
	
	
};
