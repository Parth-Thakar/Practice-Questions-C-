#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter the first number :"<<endl;
	cin>>num1;
	cout<<"enter the second number :"<<endl;
	cin>>num2;
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for(i = 1;i<=num1/2;i++)
	{
		if(num1%i==0)
		{
			sum1 = sum1 + i;
		}
	}
	for(i = 1;i<=num2/2;i++)
	{
		if(num2%i==0)
		{
			sum2 = sum2 + i;
		}
	}
	if(sum1 == num2 && sum2 == num1)
	{
		cout<<"amicable "<<endl;
	}
	else
	cout<<"not amicble number"<<endl;
}
