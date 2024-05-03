//Define a class `Calculator` with methods that perform arithmetic operations. 
//Implement exception handling to deal with division by zero and other possible errors. 
//Create an object of the `Calculator` class and demonstrate exception handling for various scenarios.
#include<iostream>
using namespace std;
class calculator
{
	int a;
	int b;
	public:
		void method()
		{
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b:";
			try
			{
				cin>>b;
				if(b==0)
				{
					throw 1.90;
				}
				else 
				{
					cout<<"division: "<<a/b<<endl;
				}
			}
			catch(int r)
			{
				cout<<"zero will be not divide with any number"<<endl;
			}
			catch(...)
			{
				cout<<"unknown error"<<endl;
			}
		}
};
int main()
{
	calculator c1;
	c1.method();
	
	return 0;
}
