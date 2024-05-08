#include "my_class.cpp"

int main()
{
	Distan a,b,c;
	
	cout << "----Input 1 ----" << endl ;
	a.setdata();
	cout <<endl <<endl<< "----Input 2 ----" << endl ;
	b.setdata();
	
	c = a+b;

	while (c.m >= 1000)
	{
		c.m -=1000;
		c.k++;
	}
	
	c.getdata();
	return 0;
}
