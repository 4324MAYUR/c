#include<iostream>

using namespace std;

class animal
{
	public:
		void makesound()
		{
			cout << "Lion Sound :" << endl << endl ;
			
		}
		void move()
		{
		   cout << "Fish Move :";	
		}
	
	
};

class lion : public animal
{
	public:
		
	makesound();
	
 };
 
class fish : public animal
{
	public:
        move();
	
};

