#include <iostream>
using namespace std;
class divide
{
	protected:
	int a,b;
	public:
	void get()
	{
		cout<<"enter a:";
		cin>>a;
		cout<<"enter b:";
		try
		{
			cin>>b;
			if(b==0)
			{
				throw 12.90;
			}
			else 
			{
				cout<<a/b<<endl;
			}
		}
		catch(int c)
		{
			cout <<"value cannot divide by zero"<<endl<<endl;
		}
		catch (...)
		{
			cout<<"unknown error"<<endl;
		}
	}
	
};
int main()
{
	divide d1;
	d1.get();
	
	return 0;
}
