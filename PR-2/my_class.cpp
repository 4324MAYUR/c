#include<iostream>

using namespace std;

class train
{
      private:
              int number ;
              string name ,source, destination ,time;
              
      public:
             void  setdata()
             {
             	int n,i;
             	cout << "Enter train of Number:";
             	cin >> n;
             	train a[n];
             	
             	if(n>=3)
             	{
			
             
				 for(i=0;i<n;i++)
             	{
             	    cout << endl << "----Enter train "<< i+1 << "  Data----:" << endl << endl;
                    cout << "Enter Train Number :" ;
                    cin >> a[i].number;
                    cout << "Enter Train name :" ;
                    cin >> a[i].name;
                    fflush(stdin);
                    cout << "Enter Train source :" ;
                    cin >> a[i].source;
                    fflush(stdin);
                    cout << "Enter Train destination :" ;
                    cin >> a[i].destination;
                    fflush(stdin);
                    cout << "Enter Train time :" ;
                    cin >> a[i].time;
                    fflush(stdin);
				 }
				getdata(0,a,n);	
			   }
			   else
			   {
			   	cout << endl << endl << "  ----Number Of Train Input Wrong----" ;
			   }
			}
				
             
			  
			 
		   void getdata(int i , train a[],int n)
		   {
		   	if(n>=3)
		   	{
			   	for(i=0;i<n;i++)
		   	{
		   		cout << endl << endl  ; 
                cout << "----Number " << i+1 << "  Of train Data----:" << endl << endl;
                cout << "Train Number :" << a[i].number << endl ;
                cout << "Train name :" << a[i].name << endl ;
                cout << "Train source :" << a[i].source << endl ;
                cout << "Train destination :" << a[i].destination << endl ;
				cout << "Train time :" << a[i].time << endl ;
		   		
			}
		
			printdata(n,a);	
			
		   		
			}
		   	
		   	
		   }
		  
		 void printdata(int n,train a[])
		    {
		    	int num;
		    	cout << endl << endl << "Enter Train Number Of Data :";
		    	cin >> num;
		    	int i;
		    	
		    
		    	for(i=0;i<n;i++)
		   	{
		   		if(a[i].number == num)
		   		{
				   
				cout << endl << endl  ; 
                cout << "----Output train Data----:" << endl << endl;
                cout << "Train Number :" << a[i].number << endl ;
                cout << "Train name :" << a[i].name << endl ;
                cout << "Train source :" << a[i].source << endl ;
                cout << "Train destination :" << a[i].destination << endl ;
				cout << "Train time :" << a[i].time << endl ;
		   			
				}
		   		
		   		
			}
		    			
			
			
			}
	
	
};
