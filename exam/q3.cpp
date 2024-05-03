//Define a base class `Shape` with private attributes `color` and `area`. 
//Implement public methods for setting and getting these attributes. 
//Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. 
//Implement methods to calculate the area specific to each shape. 
//Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
#include<iostream>
using namespace std;
class shape
{
	char color[50];
	int area;
	public:
		void set()
		{
			cout<<"enter a color: ";
			cin>>color;
			cout<<"enter a area: ";
			cin>>area;
		}
		void get()
		{
			cout<<"color: "<<color<<endl<<"area: "<<area<<endl<<endl;
		}
};
class circle:public shape
{
	int radius;
	public:
		void circleset()
		{
			cout<<"radius: ";
			cin>>radius;
		}
		void circlearea()
		{
			cout<<"area of circle: "<<3.14*radius*radius <<endl<<endl;
		}
};
class rectangle:public shape
{
	int l,w;
	public:
		void rectangleset()
		{
			cout<<"length: ";
			cin>>l;
			cout<<"width: ";
			cin>>w;
		}
		void rectanglearea()
		{
			cout<<"area of rectangle: "<<l*w<<endl<<endl;
		}
};
int main()
{
	circle c1;
	c1.set();
	c1.get();
	c1.circleset();
	c1.circlearea();
	cout<<endl;
	rectangle r1;
	r1.set();
	r1.get();
	r1.rectangleset();
	r1.rectanglearea();
	return 0;
}

