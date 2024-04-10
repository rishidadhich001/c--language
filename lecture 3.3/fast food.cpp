#include<iostream>
#include<string>
using namespace std;
class Fastfood
{
	int id;
	string name;
	string type;
	string rating;
	string location;
	int establish_year;
	int staff_quantity;
	public:
		
		Fastfood()
		{
			cout <<"Enter id : ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter type: ";
			cin>>type;
			cout<<"Enter rating: ";
			cin>>rating;
			cout<<"Enter location: ";
			cin>>location;
			cout<<"Enter establish_year: ";
			cin>>establish_year;
			cout<<"Enter staff_quantity: ";
			cin>>staff_quantity;
		}
		
		void getter()
		{
			cout<<endl;
			cout<<"id : "<<id<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"type : "<<type<<endl;
			cout<<"rating : "<<rating<<endl;
			cout<<"location : "<<location<<endl;
			cout<<"establish year : "<<establish_year<<endl;
			cout<<"staff_quantity : "<<staff_quantity<<endl;
		}	
};
int main()
{
	Fastfood f1;
	f1.getter();
	return 0;
}
