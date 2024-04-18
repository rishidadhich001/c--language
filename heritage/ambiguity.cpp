#include<iostream>
using namespace std;

class P
{
	public:
		int p;
	void stars_p()
	{
		cout << "enter the number 1 : ";
		cin >> p;
	}
};
class Q : public P
{
	protected:
		int q;
	void stars_q()
	{
		stars_p();
		cout << "enter the number 2 : ";
		cin >> q;
	}
};
class R : public P
{
	protected:
		int r;
	void stars_r()
	{
		cout << "enter the number 3 : ";
		cin >> r;
	}
};
class S : public Q,R
{
	public :
		int s;
		void stars_s()
		{
			stars_q();
			stars_r();
			cout << "enter the number 4 : ";
			cin >> s;	
		}
		void getter()
		{
			cout << "sum:" << Q::p*q*r*s;	
		}
};
main()
{
	S s1;
	s1.stars_s();
	s1.getter();
}
