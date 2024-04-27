#include<iostream>
using namespace std;

class Distance
{
	int Km,m;
	public :
		
		void setter ()
		{
			cout << "Enter a kilometer : ";
			cin >> Km;
			cout << "Enter a meter : ";
			cin >> m;
		}
		
		void method()
		{
			if(m>=1000)
			{
				int temp_km;
				temp_km=m/1000; 
				Km = temp_km + Km; 
				m=m%1000; 
			}
		}
		
		Distance operator+(Distance r)
		{
			Distance temp;
			
			temp.Km = this->Km + r.Km;
			temp.m = this->m + r.m;
			
			return temp;
		}
		
		void getter()
		{
			cout << "KiloMeter : " << Km << " Meter : "  << m << endl;
		}
};

int main()
{
	Distance r1,r2,r3;
	
	r1.setter();
	r1.method();
	r1.getter();
	cout << endl;
	r2.setter();
	r2.method();
	r2.getter();
	cout << endl;
	
	r3=r2+r1;
	r3.getter();
	
	return 0;
}
