#include<iostream>
using namespace std;

class a
{
	public:
		void f1()
		{
			cout<<"f1 is pro "<<endl;
			}	
};
class b : public a
{
	public:
		void f2()
		{
			cout<<"f2 is pro  : "<<endl;	
		}	
};
class c : public a 
{
	public:
		void f3()
		{
			cout<<"f3 is pro : "<<endl;	
		}	
};
class d : public c , public b 
{
	public:
		void f4()
		{
			cout<<"f4 is pro : "<<endl;
			}	
};
int main()
{
	cout<<"hello world : "<<endl;
}
