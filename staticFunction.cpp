#include<iostream>
using namespace std;
class a{
	public:
		void f1()
		{
			cout<<"f1 is called with object :"<<endl;
		}
		static void f2()
		{
			cout<<"f2 can be called with object and without object :"<<endl;
		}
};
int main()
{
	//a obj;
	
	//obj.f1();
	//obj.f2();
	
	//a::f1();
	a::f2();
	
}
