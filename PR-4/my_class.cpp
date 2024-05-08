#include <iostream>
using namespace std;

class Distan
{
	public:
		int k,m;
		
	   void setdata()
	    {
	    	cout << "Enter KM : ";
	    	cin >> k;
	    	cout << "Enter Meter :" ;
	    	cin >> m;
		}	
	   
	  Distan operator+(Distan b)
	  {
	  	Distan a1;
	  	a1.k = k + b.k;
	  	a1.m = m + b.m;
	  	return a1;
	  }
	   
	   void getdata()
	   {
	   	cout << endl << endl << "Distan Of KM :" << k;
	   	cout << "   "<< "Distan Of METER :" << m;
	   }
	   
};


// Questions - 2 

#include <iostream>

using namespace std;

class sms
{
private:
    string a = "Hello  ", b ;

public:
    sms()
    {
        b = a ;
    }

    void print(string s)
    {
        cout << endl << endl << "---  "<< b + s << endl;
    }
};
