#include<iostream>
using namespace std;

class calc
{
	int p,q,r,s,t;
	public :
		
		void solve(int p, int q)
		{
			int a = p / q;
			cout << "Division for p / q  : " << a << endl;
		}
		
		void solve(int p, int q,int r)
		{
			int b = p - q - r;
			cout << "Subtraction for p - q - r : " << b << endl;
		}
		
		void solve(int p, int q, int r,int s)
		{
			int c= p * q * r * s;
			cout << "Multiplication for  p * q * r * s: " << c << endl;
		}
		
		void solve(int p, int q, int r, int s, int t)
		{
			int d = p + q + r + s + t;
			cout << "Addition for p + q + r + s + t : " << d << endl;
		}		
};

int main()
{
	calc c1;
	
	c1.solve(4,2);
	c1.solve(4,3,2);
	c1.solve(4,3,2,1);
	c1.solve(5,4,3,2,1);
	
	return 0;
}
