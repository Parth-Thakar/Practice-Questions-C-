#include<iostream>
#include<string>
using namespace std;
class items
{
	public:
		string str;
		float price;
		int quantity,x;
		int temp;
		void input()
		{
			cout<<"Enter Name: ";
			cin>>str;
			cout<<"Enter Price: ";
			cin>>price;
			cout<<"Enter Quantity: ";
			cin>>quantity;
		}
		void output()
		{
			static int bill;
			x= price*quantity;
			cout<<"Name: "<<str<<endl;
			cout<<"price: "<<price<<endl;
			cout<<"Quantity: "<<quantity<<endl;
			cout<<"Total: "<<x<<endl;
			bill = bill+x;
			temp = bill;
		}
};
int main()
{
	items i1,i2;
	
	i1.input();
	
	i2.input();	
	
	cout<<"The details of 1st item :"<<endl;
	
	i1.output();
	
	cout<<"The details of 2nd item :"<<endl;
	
	i2.output();
	
	int x = i1.temp;
	
	cout<<"Total amount to be paid : "<<x<<endl;
}
