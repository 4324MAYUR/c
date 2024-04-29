#include<iostream>
using namespace std;

class student
{
	private:
		int id,age;
		string name,course,city,email,college;
	
	public:
	 
	void setdata()
	{
		int i;
		student a[5];
		for(i=0;i<5;i++)
		{
			cout << endl << "----Input Student Data----" << endl;
		    cout << "Enter Student Id :";
		    cin >> a[i].id;
		    cout << "Enter Student Name :";
		    cin >> a[i].name;
		    cout << "Enter Student Age :";
		    cin >> a[i].age;
		    cout << "Enter Student Course :";
		    cin >> a[i].course;
		    cout << "Enter Student City :";
		    cin >> a[i].city;
		    cout << "Enter Student E-mail :";
		    cin >> a[i].email;
		    cout << "Enter Student College :";
		    cin >> a[i].college; 
		    
	    }
	    getdata(i,a);
	}	
	
	
	
	void getdata(int i,student a[])
	{
		for(i=0;i<5;i++)
		{
			cout << endl << "----Output student Data----" << endl;
		    cout << "Student Id :" << a[i].id << endl;
		    cout << "Student Name :" << a[i].name << endl;
		    cout << "Student Age :" << a[i].age << endl;
		    cout << "Student Course :" << a[i].course << endl;
		    cout << "Student City :" << a[i].city << endl;
		    cout << "Student E-mail :" << a[i].email << endl;
		    cout << "Student College :" << a[i].college << endl;
	    }
	}
	
	void setcourse(string course)
	{
		this->course = course;
	}
	
};

class customer
{
	private:
		int id,age,mobile,vlidity;
		string name,city,brand;
	
	public:
	 
	void setdata2()
	{
		int i;
		customer a[5];
		for(i=0;i<5;i++)
		{
			cout << endl << "----Input customer Data----" << endl;
		    cout << "Enter customer Id :";
		    cin >> a[i].id;
		    cout << "Enter customer Name :";
		    cin >> a[i].name;
		    cout << "Enter customer Age :";
		    cin >> a[i].age;
		    cout << "Enter customer City :";
		    cin >> a[i].city;
		    cout << "Enter customer mobile_number :";
		    cin >> a[i].mobile;
		    cout << "Enter customer simcard_vlidity :";
		    cin >> a[i].vlidity; 
		    cout << "Enter customer telecom_brand_name :";
		    cin >> a[i].brand; 
	    }
	    getdata2(i,a);
	}
	
	void setcity(string city)
	{
		this->city = city;
	}
		
		
		void getdata2(int i,customer a[])
	{
		for(i=0;i<5;i++)
		{
			cout << endl << "----Output customer Data----" << endl;
		    cout << "customer Id :" << a[i].id << endl;
		    cout << "customer Name :" << a[i].name << endl;
		    cout << "customer Age :" << a[i].age << endl;
		    cout << "customer City :" << a[i].city << endl;
		    cout << "customer Mobile Number :" << a[i].mobile << endl;
		    cout << "customer simcard_vlidity :" << a[i].vlidity << endl;
		    cout << "customer telecom_brand_name :" << a[i].brand << endl;
	    }
	}

	
};
