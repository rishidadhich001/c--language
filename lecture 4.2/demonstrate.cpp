#include<iostream>
using namespace std;

class A
{  
    protected:
	float m =60;

};
class B
{   
    protected:
	float m =80;
};
class C : public A , public B
{   
   
   	public:
   		void set()
   		{
   			cout << A :: m << endl;
   			cout << B  :: m;
		}
};
int main()
{
 
 	C c1;
 	c1.set();
 	
 	return 0;
}
