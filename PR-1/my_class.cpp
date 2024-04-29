#include<iostream>

using namespace std;

class distances
{
	public:
    	int f,i;
	
	
	void set()
	{
	distances d1,d2;
	
	int fs,is;
	
	cout << "----Input one----" << endl;
	cout << "Enter feet :";
	cin >> d1.f;
	cout << "Enter Inch :";
	cin >> d1.i;
	cout << endl;
	
	cout << "----Input two----" << endl;
	cout << "Enter feet :";
	cin >> d2.f;
	cout << "Enter Inch :";
	cin >> d2.i;	
	 
	fs = d1.f + d2.f; 
	is = d1.i + d2.i; 
	
	while(is  >= 12)  
	{
		is -= 12;        
		fs++;
	}
	   cout << endl << endl ;
	   cout << fs << " : Feet   , " << is << " : Inch" ;
    }
	
};

class time
{
	public:
		int sec;
	
	void set2()
	{
		time t;
		int h=0,m=0,s=0;
		
		cout << "Enter Seconds : " ;
		cin >> t.sec;
		
		h = t.sec / 3600 ;
		m = (t.sec%360) / 60 ;
		s = (t.sec%360 ) % 60 ;
		
		cout << endl << endl ;
		cout << h << " : " << m << " : " << s;
		
		
	}
	
};

