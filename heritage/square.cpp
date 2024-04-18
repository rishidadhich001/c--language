#include<iostream>
using namespace std;

class input
{
  public:
  int p;
  void setter()
  {
    cout << "Enter the value : ";
    cin >> p;
  }
};
class square : public input
{
   public:
   void getter()
   {
     cout<<" square value is : "<< p*p << endl;
   }
};

class cube :public input
{
   public:
   void getter1()
   {
     cout<<"cube value is :"<< p*p*p << endl;
   }

};
main()
{
   cube c1;
   square s1;

   s1.setter();
   s1.getter();
   
   c1.setter();
   c1.getter1();
   


}
