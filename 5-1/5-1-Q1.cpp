#include "my_class.cpp"

int main()
{
	char n;
      	cout << "Press + for Addition ..." << endl ;
		cout << "Press - for Addition ..." << endl ;
		cout << "Press * for Addition ..." << endl ;
		cout << "Press / for Addition ..." << endl << endl ;
		cout << "Enter Your choice  => " ;
		cin >> n;
		
		
		mathd k;
		
		switch(n)
		{
			case '+':
				cout << endl << endl ;
				cout << "enter first number :";
				cin >>k.a;
				cout << "enter secound number :";
				cin >> k.b;
				k.calculate(k.a,k.b);
				break;
				
			
			case '-':
				cout << endl << endl ;
				cout << "enter first number :";
				cin >>k.a;
				cout << "enter secound number :";
				cin >> k.b;
				cout << "enter third number :";
				cin >> k.c;
				k.calculate(k.a,k.b,k.c);
				break;
				
				
			case '*':
				cout << endl << endl ;
				cout << "enter first number :";
				cin >>k.a;
				cout << "enter secound number :";
				cin >> k.b;
				cout << "enter third number :";
				cin >> k.c;
				cout << "enter fourth number :";
				cin >> k.d;
				k.calculate(k.a,k.b,k.c,k.d);
				break;
				
			case '/':
				cout << endl << endl ;
				cout << "enter first number :";
				cin >>k.a;
				cout << "enter secound number :";
				cin >> k.b;
				cout << "enter third number :";
				cin >> k.c;
				cout << "enter fourth number :";
				cin >> k.d;
				cout << "enter five number :";
				cin >> k.e;
				k.calculate(k.a,k.b,k.c,k.d,k.e);
				break;
				
			default :
				cout << "... Invalid Input ...";
				
							
		}
		
	return 0;
}
