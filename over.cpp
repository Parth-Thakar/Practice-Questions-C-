#include<iostream>
using namespace std;
class su
{
	public:
	void input()
	{
		cout<<"hello1"<<endl;
	}
};
class pr : public su
{
	public:
	void input()
	{
		cout<<"jauli chutiya"<<endl;
	}
};
int main()
{
	pr obj;
	obj.input();
}
