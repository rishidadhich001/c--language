//Create a class `Laptop` with private attributes `name`, `price`, `processor`, and a parameterized constructor. 
//Demonstrate the instantiation of objects using this constructor.
#include<iostream>
using namespace std;
class laptop
{
	char name [50];
	int price;
	char processor[50];
	public:
		
		 laptop(char name,int price,char processor)
		{
			cout<<"name: "<<name<<"price: "<<price<<endl<<"processor"<<processor<<endl;
		}
	
};
int main
{
	laptop l1;
	l1.laptop(dell,120000,gen);
	return 0;
}
