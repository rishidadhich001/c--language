#include<iostream>
using namespace std;
class Hotel
{
	int id;
	char name[50];
	char type[50];
	char rating[50];
	char location[50];
	int establish_year;
	int staff_quantity;
	int room_quantity;
	public:
		void input()
		{
			cout<<"Enter id: ";
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
			cout<<"Enter room_quantity: ";
			cin>>room_quantity;
			cout<<endl;
		}
		void output()
		{
			cout<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"type: "<<type<<endl;
			cout<<"rating: "<<rating<<endl;
			cout<<"location: "<<location<<endl;
			cout<<"establish_year: "<<establish_year<<endl;
			cout<<"staff_quantity: "<<staff_quantity<<endl;
			cout<<"room_quantity: "<<room_quantity<<endl;
		}	
};
int main()
{ 
	Hotel h[100];	
	for(int i=0;i<5;i++)
	{
		h[i].input();
	}
	for(int i=0;i<5;i++)
	{
		h[i].output();
	}
	return 0;
}
