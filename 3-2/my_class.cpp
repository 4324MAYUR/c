#include<iostream>

using namespace std;

class hotel
{ 
   private:
   	int id,rating,year,s_q,r_q;
   	string name,type,loca;
   	static int s_id;
   	static int number;
   	
   public:
     
	 void setdata()
	 {
	 	int i,j;
	 	cout << "ENter Number Of Hotels  : ";
	 	cin >> j;
		hotel x[j];
	 	for(i=0;i<j;i++)
	 	{
	 		cout << endl << endl << "Enter Hotel " << number++ << "  Detail" << endl << endl;
	 		cout << "Enter Hotel Name :";
	 		cin >> x[i].name;
	 		cout << "Enter Hotel Type :";
	 		cin >> x[i].type;
	 		cout << "Enter Hotel Rating :";
	 		cin >> x[i].rating;
	 		cout << "Enter Hotel Location :";
	 		cin >> x[i].loca;
	 		cout << "Enter Hotel Establish Year  :";
	 		cin >> x[i].year;
	 		cout << "Enter Hotel Staff Quantity :";
	 		cin >> x[i].s_q;
	 		cout << "Enter Hotel Room Quantity :";
	 		cin >> x[i].r_q;
	 		
		}
		getdata(x,0,j);
	 }
	 
	  void getdata(hotel x[],int i,int j)
	 {
	 	for(i=0;i<j;i++)
	 	{
	 		cout << endl << endl << "Output Hotel " << i+1 << "  Detail" << endl << endl;
	 		cout <<"Your Hotel Id :"<< x[i].s_id++ << endl;
	 		cout <<"Your Hotel Name :"<< x[i].name << endl;
	 		cout <<"Your Hotel Type :"<< x[i].type << endl;
	 		cout <<"Your Hotel Rating :"<< x[i].rating << endl;
	 		cout <<"Your Hotel Location :"<< x[i].loca << endl;
	 		cout <<"Your Hotel Establish Year :"<< x[i].year << endl;
	 		cout <<"Your Hotel Staff Quantity :"<< x[i].s_q << endl;
	 		cout <<"Your Hotel Room Quantity :"<< x[i].r_q << endl;
	 		
		 }
	 	
	 }	
	
};

int hotel::s_id = 101;
int hotel::number = 1;
