#include<iostream>
using namespace std;

class RBI 
{
	protected:
		float ROIRBI = 6.5;
	public:
		void rbi()
		{
			cout << "RBI ROI  RATE IS : " << ROIRBI << endl ;
		}
		
	
};

class SBI : public RBI
{

	public:
		void sbi()
		{
			cout << "SBI ROI  RATE IS : " << ROIRBI + 0.65 << endl ;
		}
		
};

class BOB : public RBI
{

	public:
		void bob()
		{
			cout << "BOB ROI  RATE IS : " << ROIRBI + 0.95 << endl ;
		}
		
		
};

class ICICI : public RBI
{

	public:
		void icici()
		{
			cout << "ICICI ROI  RATE IS : " << ROIRBI + 1.25 << endl ;
		}
		
		
};

