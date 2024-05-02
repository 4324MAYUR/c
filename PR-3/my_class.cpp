#include<iostream>

using namespace std;

//   Questions 3 
class a
{
	protected:
		int id;
		string name;
		int role;
	public:
		void seta()
		{
			cout << endl << "-----Input Your Data-----" << endl ;
			cout << "Enter Id :";
			cin >> id;
			
			cout << "Enter name :";
			cin >> name;
			
			cout << "Enter role number  :";
			cin >> role;
			
		}
		
	
	
};

class b : public a 
{
	protected:
		int salary;
		int experience;
	public:
		void setb()
		{
			cout << "Enter salary :";
			cin >> salary;
			
			cout << "Enter experience :";
			cin >> experience;
			
		
		}
	
	
};

class c : public b
{
	protected:
		string com_name;
		string addres;
	public:
		void setc()
		{
			cout << "Enter com_name :";
			cin >> com_name;
			
			cout << "Enter addres :";
			cin >> addres;
			
		
		}
		
		void getc()
		{
			cout << endl << endl << "---Output Data ----" << endl;
			cout << "Name :" << name << endl;
			cout << "role number :" << role << endl;
			cout << "salary :" << salary << endl;
		}
	
	
};

class d : public  c
{
	protected:
		string mail;
		string contect;
	public:
		void setd()
		{
			cout << "Enter e-mail :";
			cin >> mail;
			
			cout << "Enter contect :";
			cin >> contect;
			
		
		}
		
		void getd()
		{
			cout << "id  : " << id << endl ;
 			
			cout << "experience :" << experience<< endl;
			
			cout << "com_name :" << com_name << endl;
			cout << "addres :" << addres << endl;
			cout << "mail :" << mail << endl;
			cout << "contect :" << contect << endl;
			
			
 			
		}
	
	
};

//      Questions  2

class number 
{
	protected:
		int num;
	
	public:
	void setnumber()
	{
		cout << "Enter Your Square Number :";
		cin >> num;
	}	
};

class square : public number
{
	public:
		void getsquare()
		{
			cout << "Square is :" << num * num << endl ;
		}
};

class cude : public number
{
	public:
		void getcude()
		{
			cout << "Cude is :" << num* num* num << endl;
		}
};

//      Questions  1

class shape
{
	protected:
		double w , h;
	
	public:
		shape()
		{
			cout << "Enter Your Width :" ;
			cin >> w ;
			cout << "Enter Your Height :";
			cin >> h ;
			
			cout << endl << endl ;
		}
		
	
};

class triangle : public shape
{
	public:
		void area()
	{
		cout << "Your Triangle :" << (w * h) / 2 << endl ;
	}
};

class rectangle : public shape
{
	public:
		void area()
	{
		cout << endl << "Your Rectangle :" << w *h << endl ;
	}
};