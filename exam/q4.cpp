// Extend the `Shape` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
// Implement the `displayDetails()` function in each derived class to print information specific to the shape. 
// Create an array of `Shape` pointers, pointing to objects of different shapes. 
// Demonstrate polymorphism by calling the `displayDetails()` function for each object.
#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void display()
	{
		cout<<"it is a shape "<<endl;
	}
};
class circle:public shape
{
	void display()
	{
		cout<<"it is a circle shape "<<endl<<endl;
	}
};
class rectangle:public shape
{
	void display()
	{
		cout<<"it is a rectangle shape "<<endl<<endl;
	}
};
int main()
{
	shape *s[2];
	circle c1;
	rectangle r1;
	s[0]=&c1;
	s[1]=&r1;
	
	s[0]->display();
	s[1]->display();
	return 0;
}

