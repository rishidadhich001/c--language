#include<iostream>
#include<string>
using namespace std;
class Diamond
{
	int d_id;
	string d_name;
	int d_staff_quantity;
	string d_revenue;
	int d_import_raw_diamonds;
	int d_export_diamonds;
	string d_ceo_name;
	public:
		void getter()
		{
			cout<<endl;
			cout<<"id: "<<d_id<<endl;
			cout<<"name: "<<d_name<<endl;
			cout<<"staff_quantity: "<<d_staff_quantity<<endl;
			cout<<"revenue: "<<d_revenue<<endl;
			cout<<"import_raw_diamonds: "<<d_import_raw_diamonds<<endl;
			cout<<"export_diamonds: "<<d_export_diamonds<<endl;
			cout<<"ceo_name: "<<d_ceo_name<<endl;
		}	
		Diamond(int id,string name,int staff_quantity,string revenue,int import_raw_diamonds,int export_diamonds,string ceo_name)
		{
			d_id=id;
			d_name=name;
			d_staff_quantity=staff_quantity;
			d_revenue=revenue;
			d_import_raw_diamonds=import_raw_diamonds;
			d_export_diamonds=export_diamonds;
			d_ceo_name=ceo_name;
		}
};
int main()
{
	Diamond user(1,"rd",200,"$100,00,000,00",1000,2005,"rishi");
	user.getter();
	return 0;
}
