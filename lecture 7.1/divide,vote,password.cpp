//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//a number cannot be divided by zero
//a person cannot be able to vote if his/her age is less than 18
//a password cannot be validated if it doesn’t contains an uppercase letter
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
				throw b;
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
	}
	
};
class vote 
{
	protected:
	int v;
	public:
		void get1()
			{
				cout<<"enter v:";
				try
				{
				cin>>v;
				if(v<=18)
				{
					throw v;
				}
				else 
				{
					cout<<"eligible to vote "<<v<<endl;
				}
				}
				catch(int s)
				{
					cout <<"you are not eligible to vote"<<endl<<endl;
				}
			}
};
class password
{
	protected:
	char p;
	public:
	void get2()
	{
		cout<<"enter a password:";
		try
		{
			cin>>p;
			if(p>=65&&p<=90)
			{
				cout<<"password is valid" << endl;
			}
			else 
			{
				throw p;
			}
		}
		catch(int r)
		{
			cout <<"password is invalid "<<endl<<endl;
		}
	}
	
};
int main()
{
	divide d1;
	d1.get();
	
	vote v1;
	v1.get1();
	
	password p1;
	p1.get2();
	return 0;
}
