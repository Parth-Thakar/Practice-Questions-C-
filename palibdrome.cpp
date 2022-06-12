#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int numc = num;
	int rev=0;
	int temp;
	
	while(num!=0)
	{
		temp = num%10;
		rev = rev*10+temp;
		num = num/10;
	}
	if(rev == numc)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not palindrome :"<<endl;
	}
}
