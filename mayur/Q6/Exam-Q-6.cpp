#include "class.cpp"

int main()
{
	eml e1,e2,e3;
	e1.setdata();
	cout << endl ;
	e2.setdata();
	
	e3.age = e1.age - e2.age ;
	cout << endl <<endl ;
	cout << "Employee age :" << e3.age ;

	return 0;
}
