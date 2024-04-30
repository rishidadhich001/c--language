#include<iostream>
using namespace std;
class vote 
{
	protected:
	int v;
	public:
		void get()
			{
				cout<<"enter v:";
				try
				{
				cin>>v;
				if(v<=18)
				{
					throw v;
				}
				else 
				{
					cout<<"eligible to vote "<<v<<endl;
				}
				}
				catch(int s)
				{
					cout <<"you are not eligible to vote"<<endl<<endl;
				}
			}
};
int main()
{
	vote v1;
	v1.get();
	return 0;
}
