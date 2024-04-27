#include<iostream>
using namespace std;

class Message
{
 	string r1;
	 public:
	 string r2;
	 
	 Message()
	 {
		cout << "Enter a value of r1 :";
		cin >> r1;
		r2=r1; 	
	 }	
	 
	 void print()
	 {
	 	cout << r1 << endl;
	 }
	 
	 void print(string temp)
	 {
	 	cout << r1 << "   " << temp << endl;
	 }
};

int main()
{
	Message msg1;
	msg1.print(msg1.r2);
	return 0;
}
