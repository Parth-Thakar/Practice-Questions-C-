#include<iostream>
using namespace std;
class cls
{
	public:
		int data;
		
	void f1()
	{
		cout<<"f1 is called :"<<endl;
	}	
};
int main()
{
	cls* obj = new obj;
	
	cout<<obj;
}
