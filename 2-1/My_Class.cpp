
#include<iostream>

using namespace std;

class empl
{
	private:
		int id,age,exp;
		string name,role,city,com_name;
		double salary;
		
	public:
		void setdata()
		{
			int i;
			empl a[5];
			
			for(i=0;i<5;i++)
			{
				cout << endl << "Employee [" << i + 1 <<"] Data Input " << endl << endl;

				cout << "Enter Employe Id :" ;
				cin >> a[i].id;
				
				cout << "Enter Employe Name :" ;
				cin >> a[i].name;
				
				cout << "Enter Employe Age :" ;
				cin >> a[i].age;
				
				cout << "Enter Employe Role :" ;
				cin >> a[i].role;
				
				cout << "Enter Employe Salary :" ;
				cin >> a[i].salary;
				
				cout << "Enter Employe City :" ;
				cin >> a[i].city;
				
				cout << "Enter Employe Experience :" ;
				cin >> a[i].exp;
				
				cout << "Enter Employe Company_Name :" ;
				cin >> a[i].com_name;
				
			}
			getdata(0,a);
		}
		
		
		getdata(int i,empl a[])
		{
			for(i=0;i<5;i++)
			{
				cout << endl << "Employee [" << i + 1 <<"] Data Output " << endl << endl;
				cout << "Employee Id : " << a[i].id << endl;
				cout << "Employe Name : " << a[i].name << endl;
				cout << "Employe Age : " << a[i].age << endl;
				cout << "Employe Role : " << a[i].role << endl;
				cout << "Employe Salary : " << a[i].salary << endl;
				cout << "Employe city : " << a[i].city << endl;
				cout << "Employe Experience : " << a[i].exp << endl;
				cout << "Employe Company_name : " << a[i].com_name << endl;
				
				
			}
			
			
		}
	
		
	
	
	
};



class car
{
	private:
		int id,year;
		string com,color,model;
	
	public:
		void setcardata()
		{
			int i;
			car a[4];
			for(i=0;i<4;i++)
			{
			    cout << endl << "----Enter ["<< i+1 <<"] Car Record ----" << endl << endl ;
			     cout << "Enter Car_Id :" ;
			     cin >> a[i].id;
			     cout << "Enter Car Company_Name :" ;
			     cin >> a[i].com;
			     cout << "Enter Car_Color :" ;
			     cin >> a[i].color;
			     cout << "Enter Car_Model :" ;
			     cin >> a[i].model;
				 cout << "Enter Car_Release_year :" ;
				 cin >> a[i].year;
			    
		    }
		    getcardata(0,a);
		}
		
		getcardata(int i , car a[])
		{
			for(i=0;i<4;i++) 
			{
			    cout << endl << " ----Your ["<< i+1 <<"] Car Record Data ----" << endl << endl ;
			    cout << "Your Car_Idc :" << a[i].id << endl;
			    cout << "Your Car Company_Name :" << a[i].com << endl;
			    cout << "Your car_Color :" << a[i].color << endl;
			    cout << "Your Car_Model :" << a[i].model << endl;
			    cout << "Your Car_Release_Year :" << a[i].year << endl;
			    
		    }
			
		}
		
};
