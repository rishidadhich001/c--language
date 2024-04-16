#include<iostream>
using namespace std;

class feet_inches
{
	
	public :
		int feet,inches;
		int f=12,INCHES=0;
		
		void setter()
		{
			cout << "enter feet : ";
			cin >> feet;
			cout << "enter inches : ";
			cin >> inches; 
		}
		void reader()
		{
			int i;
			for(i=1;i<=inches;i++)
			{
				if(inches>=f)
				{
					if(i==f)
					{
						f+=12;
						feet+=1;
					}
				}
				else
				{
					INCHES+=1;
				}
			}
		}
		void getter()
		{
			cout << "feet : " << feet << endl << "inches : " << INCHES;
		}
};

int main()
{
	feet_inches fe1,fe2;
	
	fe1.setter();
	fe1.reader();
	fe1.getter();
	
	cout << endl;
	
	fe2.setter();
	fe2.reader();
	fe2.getter();
	
	int a = fe1.feet + fe2.feet;
	int b = fe1.INCHES + fe2.INCHES;
	
	cout << endl << endl << "feet : " << a << endl << "inches : " << b;
	return 0;
}
