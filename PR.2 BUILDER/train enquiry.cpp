#include<iostream>
using namespace std;

class Enquiry
{
	int a;
	string train_name;
	string source;
	string destination;
	string train_time;

	
	public:
	int train_number;
	void set()
	{
		cout << "Enter a  train number : ";
		cin >> train_number;
		cin.ignore();
		
		cout << "Enter a train name : ";
		getline(cin,train_name);
		
		cout << "Enter a source : ";
		getline(cin,source);
		
		cout << "Enter a destination : ";
		getline(cin,destination);
		
		cout << "Enter a train time : ";
		getline(cin,train_time);
	}

	void get()
	{
		cout << "Train number : "<< train_number << endl;
		cout << "Train name : " << train_name << endl;
		cout << "Source : "     << source << endl;
		cout << "Destination : "<< destination << endl;
		cout << "Train time : " << train_time << endl;
		
	}
		
	Enquiry()
	{
		cout << "WELCOME TO SURAT !";
		cout<<endl;
	}
		
};
 int main()
{
		Enquiry e;
		e.set();

		cout << "....................." << endl;
		
		Enquiry e1;
		e1.set();

		cout << "....................." << endl;
		
		Enquiry e2;
		e2.set();
		
		cout << "....................." << endl;
		
		int d;
		cout << " Enter a details : " <<  endl;
		cin  >>  d;
		
		
		if(e.train_number == d)
		{
		    e.get();
		    cout<<endl;
		}
		
		if(e1.train_number == d)
		{
		     e1.get();
		     cout<<endl;
		}
		if(e2.train_number == d)
		{
		   e2.get();
		   cout<<endl;
		}
		
		return 0;
}
