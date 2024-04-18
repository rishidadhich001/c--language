#include<iostream>
using namespace std;

class Increase
{
	int a;
	public:
	void set()
	{
		cout<<"Enter number :";
		cin >> a;
	}	
	void get()
	{
				
	}
	Increase operator++ (int)
	{
		Increase temp;
		temp.a=0;
		temp.a=a+1;
		cout << temp.a << endl;
		return temp;
	}
};
int main()
{
	Increase i1;
	i1.set();
	i1++;
	return 0;
}
