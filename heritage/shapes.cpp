#include<iostream>
using namespace std;

class shapes
{
  public:
  int l,b;
  void setter()
  {
  	cout << "Enter the length : ";
  	cin >> l;
  	cout << "Enter the breadth : ";
  	cin >> b;
  	
  }		
}; 
class triangle : public shapes
{
	 public:
	 	int Ans;
		 void getter1()
		 {
			Ans=(l*b)/2;
		 	cout<<"Area of triangle :"<<Ans<<endl;
		 }
	
};
class rectangle : public shapes
{
    public:
	int a;

	void getter2()
	{
		a=(l*b);
		cout << "Area of rectangle  : " << a << endl;
		}	
};
main()
{
	rectangle r1;
	triangle t1;
	r1.setter();
	r1.getter2();
	t1.setter();
	t1.getter1();
	
}
