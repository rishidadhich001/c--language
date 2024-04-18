#include<iostream>
using namespace std;

class Greater
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter a number :";
		cin >> a;
	}	
	void get()
	{
		if(a>b)
		{
			cout << "b is max";
		}
		else
		{
			cout << "a is max";
		}
		
	
	}
	Greater operator<(Greater g)
	{
		Greater temp;
		temp.b=this->a;
		temp.a=g.a;
		return temp;
	}
};
int main()
{
	Greater g1,g2,g3;
	g1.set();
	g2.set();
	
	g3=g1<g2;
	g3.get();
	return 0;
}
