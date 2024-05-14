#include <iostream>

using namespace std;

int getint()
{
	int n;
	cin >>n;
	return n;
}

double getDouble()
{
	double n;
	cin >>n;
	return n;
}

class A1
{
	protected:
		int choice;
		double a,b,c;
	public:
		virtual void calculate() = 0;
		
};

class A2 : public A1
{
	public:
		void calculate()
		{
	    	cout << "Press 1... For Get Area Of Circle" << endl;
            cout << "Press 2... For Get Area Of Triangle" << endl;
            cout << "Press 3... For Get Area Of Rectangle" << endl;
            cout << "Enter Your Choice : " ;
            choice = getint();
            
			switch(choice)
			{
				
				case 1:
					cout << "Enter Radius Of Circle : " ;
					a = getint();
					cout << endl << "Area Of Circle = " << 3.14 * a * a << endl;
					break;
				
				case 2:
                    cout << endl << "Enter Base Of Triangle : " ;
                    a = getDouble();
                    cout << "Enter Height Triangle : " ;
                    b = getDouble();
                    cout << endl << "Area Of Triangle = " << 0.5 * a * b << endl;
                    break;
				
				case 3:
                    cout << endl << "Enter Height Of Rectangle : " ;
                    a = getDouble();
                    cout << "Enter Width Of Rectangle : " ;
                    b = getDouble();
                    cout << endl << "Area Of Rectangle = " << a * b << endl;
                    break;	
					
				default:
					cout << endl << endl << " -- Invalid value --" ;
					break;
			}
		}
};




