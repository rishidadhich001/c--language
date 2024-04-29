#include <iostream>
using namespace std;
class Admin
{
	protected:
	char company_name[50];
	int manager_salary;
	int employee_salary;
	int total_staff;
	int annual_revenue;
	bool can_terminate;
	
	public:
		void myaccess()
		{
			cout<<"enter a company name : ";
			cin>>company_name;
			cout<<"enter a manager salary : ";
			cin>>manager_salary;
			cout<<"enter a employee salary : ";
			cin>>employee_salary;
			cout<<"enter a total staff : ";
			cin>>total_staff;
			cout<<"enter a annual revenue : ";
			cin>>annual_revenue;
			cout<<"enter a can terminate (true/false) : ";
			cin>>can_terminate;
			cout<<"company name : "<<company_name<<endl;
			cout<<"manager salary : "<<manager_salary<<endl;
			cout<<"employee salary : "<<employee_salary<<endl;
			cout<<"total staff : "<<total_staff<<endl;
			cout<<"annual revenue : "<<annual_revenue<<endl;
			cout<<"can terminate : "<<can_terminate<<endl;
		}
};
class Manager:public Admin
{
	public:
		void myaccess()
		{
			cout<<"enter a manager salary : ";
			cin>>manager_salary;
			cout<<"enter a total staff : ";
			cin>>total_staff;
			cout<<"enter a annual revenue : ";
			cin>>annual_revenue;
			cout<<"enter a can terminate (true/false) : ";
			cin>>can_terminate;
			cout<<"manager salary: "<<manager_salary<<endl;
			cout<<"total staff: "<<total_staff<<endl;
			cout<<"annual revenue: "<<annual_revenue<<endl;
			cout<<"can terminate : "<<can_terminate<<endl;
		}
};
class Employee:public Manager
{
	public:
	void myaccess()
	{
		cout<<"enter a employee salary : ";
		cin>>employee_salary;
		cout<<"employee salary: "<<employee_salary<<endl;
	}
};
int main()
{
	Admin a1;
	a1.myaccess();
	return  0;
}
