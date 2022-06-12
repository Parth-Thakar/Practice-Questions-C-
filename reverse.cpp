#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int digit,ans=0,temp=0;
	cout<<"enter the number you want to reverse :"<<endl;
	cin>>digit;
	while(digit!=0)
	{
	
	temp=digit%10;
	if((ans>INT_MAX/10)||(ans<INT_MIN/10))
	{
		cout<<"0ut of bound range";
	}
	ans=(ans*10)+temp;
	digit=digit/10;
}
	cout<<ans;
}
