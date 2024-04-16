#include<iostream>
using namespace std;

class times
{
	int sec,min=0,hour=0,s=0;
	
	public :
		
		void setter()
		{
			cout << "enter second : ";
			cin >> sec;
		}
		
		void watch()
		{
			if(sec>=60)
			{
				min=sec / 60;
				s=sec % 60;   
				if(min>=60)
				{
					hour=min / 60; 
					min=min % 60;  
				}
			}
		}
		
		void getter()
		{
			cout << "hour : " << hour << " minutes : " << min << " seconds : " << s;
		}
};

int main()
{
	times t1;
	
	t1.setter();
	t1.watch();
	t1.getter();
	
	
	return 0;
}
