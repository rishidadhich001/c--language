#include<iostream>
using namespace std;
class Student
{
	private:
		int id;
		char name[50];
		int age;
		char course[50];
		char city[50];
		char email[50];
		char college[50];
	public:	
		void input()
		{
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter course: ";
			cin>>course;
			cout<<"Enter city: ";
			cin>>city;
			cout<<"Enter email: ";
			cin>>email;
			cout<<"Enter college: ";
			cin>>college;
			cout<<endl;
		}
		void output()
		{
			cout<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"course: "<<course<<endl;
			cout<<"city: "<<city<<endl;
			cout<<"email: "<<email<<endl;
			cout<<"college: "<<college<<endl;
		}	
};
int main()
{
	Student s1,s2,s3,s4,s5;
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s5.input();
	
	s1.output();
	s2.output();
	s3.output();
	s4.output();
	s5.output();
	
	
	return 0;
}
