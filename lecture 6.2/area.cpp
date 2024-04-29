#include<iostream>
using namespace std;
class abstract 
{ 
	protected:
	int r,h,b,l,w;
	float pi=3.14;
	protected:
		virtual void calculate()=0;
};
class circle:public abstract
{
	public:
	void calculate()
	{
		cout<<"enter a radius: ";
		cin>>r;
		cout<<"area of circle: "<<pi*r*r<<endl;
	}
};
class triangle:public abstract
{
	public:
	void calculate()
	{
		cout<<"enter a height: ";
		cin>>h;
		cout<<"enter a breath: ";
		cin>>b;
		cout<<"area of triangle: "<<(h*b)/2<<endl;
	}
};
class rectangle:public abstract
{
	public:
	void calculate()
	{
		cout<<"enter a length: ";
		cin>>l;
		cout<<"enter a w: ";
		cin>>w;
		cout<<"area of rectangle: "<<l*w<<endl;
	}
};
int main()
{
	circle c1;
	c1.calculate();
	triangle t1;
	t1.calculate();
	rectangle r1;
	r1.calculate();
	return 0;
}
