#include<iostream>
using namespace std;

class students 
{
	private:
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string college;
		
	public:
		void setstd()
		{
			cout << "enter your id     \t:";
			cin >> id;
			
			cout << "enter your name \t:";
			cin >> name;
			
			cout << "enter your age    \t:";
			cin >> age;
			
			cout << "enter your course \t:";
			cin >> course;
			
			cout << "enter your city \t:";
			cin >> city;
			
			cout << "enter your e-mail \t:";
			cin >> email;
			
			cout << "enter your college \t:";
			cin >> college;
		}
		
	public:
		void Age()
		{
			if(this->age>=18)
			{
				cout << "valide  Age  is   :\t" << age;
			}
			else
			{
				cout << "your age not valide ";
			}
			
		}
	
	public:
	      void getstd()
		  {
	     cout<< "your id \t:" << id << endl
		     << "your name \t:" << name << endl
			 << "your age \t:" << age ;
		    // Age();
		cout <<endl << "your course \t:" << course << endl
		     << " your city \t:" << city << endl
		     << "your e-mail \t:"  << email << endl
		     
		     << "your college \t:" << college ;
		  	
		  	
		  }	
};



int main()
{
	students v;
	cout << endl << "--- first studen data enter  :---" << endl ;
	v.setstd();
	cout << endl << "--- first studen data :---" << endl;
	v.getstd();
	cout << endl << endl << endl;
	v.Age();
	
	
}
