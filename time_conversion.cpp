#include<iostream>
using namespace std;
class time
{
	public:
	int hrs;
	int min;
	int sec;
	
	void input()
	{
		cin>>hrs;
		cin>>min;
		cin>>sec;
	}
};
int main()
{
	int ts;
	time t1;
	cout<<"enter the time in HRS , MIN & SEC format "<<endl;
	t1.input();
	ts=(t1.hrs*3600)+(t1.min*60)+t1.sec;
	cout<<"total seconds :"<<ts<<endl;
}
