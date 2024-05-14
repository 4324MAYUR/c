#include <iostream>
using namespace std;

class A
{
// Questions: 1	
	private:
		int a,b;
	public:
		void divide()
		{
			cout << "Enter First Number :" ;
			cin >> a;
			
			cout << endl << "Enter Secound Number :" ;
			cin >> b;
			
			try
			{
				if(b==0)
				{
					throw b;
				}
				else 
				{
					cout << endl << endl << "- - - - Your Anser : " << a/b ; 
				}
			}
			
			catch(int b)
			{
				cout << endl << " - - - - !!  Can't Divided By Zero !! - - - - " << endl << endl;
			}
	    } 	

// Questions: 2
        int getint()
        {
        	int n;
        	cin >> n;
        	return n;
		}
        void age()
        {
        	int age;
        	cout <<endl <<endl << "Enter Your Age :" ;
        	age = getint();
        	
        	try
        	{
        		if(18>age)
        		{
        			throw age;
				}
				else
				{
					cout << endl << "- - - - !! You Can Vote valied !! - - - -" << endl;
				}
			}
			
			catch(int age)
			{
				cout << endl << endl << "----You cannot vote because you are  "<< age <<" years old ----" ; 
			}
		}
        	
// Questions: 3 	 
     
 	    void password()
 	    {
 	    	char pas[20];
 	    	int count = 0,i ;
 	    	
 	    	cout << endl << endl << "Enter Your Password : " ;
 	    	cin >> pas ;
 	    	
 	    	for(i=0;pas[i] != '\0';i++)
 	    	{
 	    		if(pas[i]>= 'A' && pas[i] <= 'Z')
 	    		{
 	    			count++;
				}
			}
			
			try
			{
				if(count == 0)
				{
					throw count;
				}
				else
				{
					cout << endl << endl << "--- Your Password Is Valied ---";
				}
			}
			
			catch(int count)
			{
				cout << endl << endl << " --- !! Your Password Uppercase Letter Mising !!----" << endl << endl;
			}
		}
};
