#include<iostream>
using namespace std;
class x
{
	protected :
	int a;
	int b;
	int c;
};

class y:public x
{
	public:
		void setdata()
		{
			cout<<"Enter a"<<endl;
			cin>>a;
			cout<<"Enter b"<<endl;
			cin>>b;
			cout<<"Enter c"<<endl;
			cin>>c;
			cout <<endl;
		} 
		void getdata()
		{
			cout<<"a :"<<a*a*a<<endl;
			cout<<"b :"<<b*b*b<<endl;
			cout<<"c :"<<c*c*c<<endl;
			cout <<endl;
		}
};

int main()
{	
	y y1,y2,y3;
	y1.setdata();
	y2.setdata();
	y3.setdata();
	
	y1.getdata();
	y2.getdata();
	y3.getdata();
	return 0;
}
