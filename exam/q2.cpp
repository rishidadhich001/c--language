//Define a class `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. 
//Encapsulate these attributes using appropriate access specifiers. 
//Implement public member functions to credit, debit, and display the balance. 
//Demonstrate encapsulation by interacting with the class through its member functions.
#include<iostream>
using namespace std;
class bankaccount
{
	int accountnumber;
	int balance;
	char ownername[50];
	public:
		void set()
		{
			cout<<"enter a account number:  ";
			cin>>accountnumber;
			cout<<"enter a balance: ";
			cin>>balance;
			cout<<"enter owner name: ";
			cin>>ownername;
			cout<<endl;
		}
		void get()
		{
			cout<<"account number: "<<accountnumber<<endl;
			cout<<"balance : "<<balance<<endl;
			cout<<"owner name: "<<ownername<<endl<<endl;
		}
		void credit()
		{
			int deposit;
			int totalbalance;
			cout<<"deposit amount:";
			cin>>deposit;
			totalbalance=balance+deposit;
			cout<<"total balance: "<<totalbalance<<endl<<endl;
		}
		void debit()
		{
			int withdraw;
			int totalbalance;
			cout<<"withdraw amount:";
			cin>>withdraw;
			totalbalance=totalbalance-withdraw;
			cout<<"total balance: "<<totalbalance<<endl<<endl;
		}
		void display()
		{
			int totalbalance;
			cout<<"total balance: "<<totalbalance<<endl;
		}
};
int main()
{
	bankaccount b1;
	b1.set();
	b1.get();
	b1.credit();
	b1.debit();
	b1.display();
	return 0;
}
