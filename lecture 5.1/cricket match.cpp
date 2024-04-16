#include<iostream>
using namespace std;

class A  
{
	protected :
	int overs;
	
	public :
		void cricket(int overs)
		{
			this->overs = overs;
			cout  << " Overs : " << overs << endl;
		}
		
};
class B : public A
{
	    public :
		void cricket(int overs)
		{
			this->overs = overs;
			cout  << " T20 match : " << overs << endl;
		}
};

class C: public A
{
		public :
		void cricket(int overs)
		{
			this->overs = overs;
			cout  << " ODI match : " << overs << endl;
		}
};
 int main()
{
	B b;
	b.cricket(20);
	
	C c;
	c.cricket(50);
	
	return 0;
	
}
