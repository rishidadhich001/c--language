#include<iostream>
using namespace std;
class Car
{
	public:
		int id;
		char company_name[50];
		char color[50];
		char model[50];
		int release_year;
		
		void input()
		{
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter company_name: ";
			cin>>company_name;
			cout<<"Enter color: ";
			cin>>color;
			cout<<"Enter model: ";
			cin>>model;
			cout<<"Enter release_year: ";
			cin>>release_year;
			cout<<endl;
		}
		void output()
		{
			cout<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"company_name: "<<company_name<<endl;
			cout<<"color: "<<color<<endl;
			cout<<"model: "<<model<<endl;
			cout<<"release_year: "<<release_year<<endl;
		}	
};
int main()
{
	Car c1,c2,c3,c4;
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	
	return 0;
}
