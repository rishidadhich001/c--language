#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
	int id;
	string name;
	string role;
	int salary;
	int experience;
	string company_name;
	string address;
	string email;
	double contact;
	
	void set1()
	{
		cout << "Enter a ID :";
		cin >> id;
		cin.ignore();
		cout << "Enter a name :";
		getline(cin,name);
		
		cout << "Enter a role :";
        getline(cin,role);
	}	
};

class B : public A
{
	public :
	void set2()
	{
		set1();
		cout << "Enter a salary :";
		cin >> salary;
		cout << "Enter a experience:";
		cin >> experience;	
	}	
};

class C : public B
{
	public :
	void set3()
	{
		set2();
		cin.ignore();
		cout << "Enter a Company name :";
		 getline(cin,company_name);
		cout << "Enter a Company address :";
		 getline(cin,address);
	}
	
	void get()
	{
		cout << "name : " << name << endl ;
		cout << "role : " << role << endl;
		cout << "salary : " << salary << endl ;
	}
	
	 	
};
class D : public C
{
	public:
	void set4()
	{
		set3();
		cout << "Enter a Email :";
		 getline(cin,email);
		cout << "Enter a Contact :";
		cin >> contact;
		cout <<endl;
	}
	
	void get2()
	{
		cout << "ID :" << id << endl;
		cout << "name : " << name << endl ;
		cout << "role : " << role << endl;
		cout << "salary : " << salary << endl ;
		cout << "experiance : " << experience << endl ;
		cout << "Company_name : " << company_name << endl;
		cout << "address : " << address << endl ;
		cout << "Email :" << email << endl;
		cout << "Contact :" << contact << endl;
	}	
};
int main()
{
	
	D d1;
	d1.set4();
	d1.get2();
	return 0;
}
