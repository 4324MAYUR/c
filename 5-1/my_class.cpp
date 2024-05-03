#include<iostream>
using namespace std;

class cal
{
	public:
		int a,b,c,d,e;

};

class mathd : public cal
{
	public:
		void calculate(int a,int b)
		{
			cout << endl << "Addition :" << a+b;
		}
		void calculate(int a,int b,int c)
		{
			cout << endl << "Subtraction :" << a-b-c;
		}
		void calculate(int a,int b,int c,int d)
		{
			cout << endl << "Multiplication :" << a*b*c*d;
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			cout << endl << "Addition :" << a / b / c / d / e;
		}
	
};

// Question 2

class cricket
{
	private:
		int a,b;
	
};

class t20 : public cricket
{
	public:
		void gett20()
	{
		cout << endl << endl ;
		cout << "--->  T20 Match Total Over is : 20 ...";
	    cout << endl << endl ;
	}
};

class test : public cricket
{
	public:
		void gettest()
	{
		cout << endl << endl ;
		cout << "--->  TEST Match Total Over is : 90 ...";
	    cout << endl << endl ;
	}
};










