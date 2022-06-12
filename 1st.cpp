#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"enter the number that you want to check wether it is even or odd"<<endl;
	cin>>i;
	if(i==0)
		cout<<"the number 0 is neither even nor odd "<<endl;
	else if(i%2==0)
		cout<<"the number that you enter is even : "<<endl;
	else
		cout<<"the number that you enter is odd : "<<endl;
}
