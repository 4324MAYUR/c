#include<iostream>

using namespace std;

class x
{
	protected:
		int a,b,c;
		
	
	
};

class y : public x
{
	public:
		void setdata()
		{
			cout << "Enter A:";
			cin >> a;
			cout << "Enter B:";
			cin >> b;
			cout << "Enter C:";
			cin >> c;
		}
		
		void getdata()
		{
			cout << endl << endl ;
			cout << "A :" << a << endl;
			cout << "B :" << b << endl;
			cout << "C :" << c << endl << endl ;
		}
		void sumdata()
		{
			cout << "SUM OF A + B + C = " << a+b+c ;
		}
};



//  Questions 2 
class P
{
	protected:
		float Celsius;
		
	public:
		void setcelsius()
		{
			cout << "Enter Celsius :" ;
			cin >> Celsius ;
			cout << endl << endl;
		}
	
	
};


class Q : public P
{
	protected:
		float Fehrenheit;
	public:
		void setFehrenheit()
		{
			Fehrenheit = Celsius*(1.8) + 32 ;
			cout << "Fehrenheit : " << Fehrenheit << endl << endl << endl ;
		}
	
};

class R : public Q
{
	 protected:
	 	float Kelvin;
	 public:
	 	void setKelvin()
	 	{
	 		Kelvin = (Fehrenheit - 32) * 5/9 +273.15 ;
	 		cout << "Kelvin :" << Kelvin ;
	 		
		}
	
};
