#include<iostream>
using namespace std;

class A
{  
    protected :
    	
	int a,b,c;
	
	public :
			
		void SBIbank()
		{
			cout << "sbi intrest rate value " << endl;
			cin >> a;
	    }
	    void BOBbank()
		{
			cout << "bob intrest rate value" << endl;
			cin >> b;
	    }
	    void ICICIbank()
		{
			cout << "icici intrest rate value" << endl;
			cin >> c;
	    }
	
};
class B : public A
{      
        public:
        	
        	void getter()
        	{
        		SBIbank();
        		cout<< " sbi bank :"<< a << endl;
        	}
};
class C : public A
{      
    public:
	        
       	void getter1()
       	{
       		BOBbank();
       		cout << " bob bank : "<< b << endl;
		}
};
class D : public A
{
    public:
    
	    void getter2()
	    {
	    	ICICIbank();
	    	cout << "icici bank: " << c << endl;
		} 	
};

int main()
{

  B b1;
  b1.getter();
  C c1;
  c1.getter1();
  D d1;
  d1.getter2();

	return 0;
}
