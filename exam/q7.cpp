//Define an abstract class `Vehicle` with pure virtual functions `startEngine()` and `drive()`. 
//Implement concrete classes `Car` and `Bike` that inherit from `Vehicle`. 
//Demonstrate polymorphism by creating an array of `Vehicle` pointers, pointing to objects of both `Car` and `Bike`. 
//Call the `startEngine()` and `drive()` functions for each object.
#include<iostream>
using namespace std;
class vehicle
{
	public:
		virtual void startengine()=0;
		virtual void drive()=0;
};
class car:public vehicle
{
	public:
		void startengine()
		{
			cout<<"start the car engine"<<endl;
		}
		void drive()
		{
			cout<<"start drive a car "<<endl<<endl;
		}
};
class bike:public vehicle
{
	public:
		void startengine()
		{
			cout<<"start the bike engine"<<endl;
		}
		void drive()
		{
			cout<<"start drive a bike "<<endl<<endl;
		}
};
int main()
{
	vehicle *v[2];
	car c1;
	bike b1;
	v[0]=&c1;
	v[1]=&b1;
	
	v[0]->startengine();
	v[0]->drive();
	
	cout<<endl;
	
	v[1]->startengine();
	v[1]->drive();
	return 0;
}
