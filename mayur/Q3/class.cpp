#include<iostream>

using namespace std;

class device
{
	public:
		string brand;
		string powerconsumption;
	
	
	
};

class laptop : public device
{
	public:
		void setting()
		{
			cout << "Enter your Laptop Brand :";
			cin >> brand;
			cout << "Enter your Laptop powerconsumption :";
			cin >> powerconsumption;
			
		}
		
		void getting()
		{
			cout << endl << endl << "your Laptop Brand :" << brand << endl;
			cout << "Enter your Laptop powerconsumption :" << powerconsumption << endl << endl << endl;
		}
 };
 
 
 
 class smatphone : public device
{
	public:
		void setting()
		{
			cout << endl << endl << "Enter your smatphone Brand :";
			cin >> brand;
			cout << "Enter your smatphone powerconsumption :";
			cin >> powerconsumption;
			
		}
		
		void getting()
		{
			cout << endl << endl << "your smatphone Brand :" << brand<< endl ;
			cout << "Enter your smatphone powerconsumption :" << powerconsumption<< endl;
		}
		
	
	
	
};

