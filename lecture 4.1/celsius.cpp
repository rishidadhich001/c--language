#include<iostream>
using namespace std;

class P
{  
    protected:
        float a ,b ,c;

};
class Q :public P
{   
    public:
    void Fahrenheit()
    {
        cout << "Enter the value : ";
        cin >> a;

        b=(1.8*a)+32;
        }
};
class R  : public Q
{   
    	   public :

                   void kelvin()
                   {
                           c=a+273;
                   }

   void setter()
   {
           cout << "fahrinheit : "<< b << endl ;
           cout << "kelvin : " << c<<endl;
  }

};

int main()
{
    R r1;

    r1.Fahrenheit();
    r1.kelvin();
    r1.setter();
}
