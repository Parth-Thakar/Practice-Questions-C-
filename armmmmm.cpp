#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	
	int numc = num;
	int check = num;
	int digit =0;
	while(numc!=0)
	{
		numc = numc/10;
		digit++;
	}
	int temp,ans=0;
	while(num!=0)
	{
		temp = num % 10;
		ans = ans + pow(temp,digit);
		num = num/10;
	}
	
	if(check==ans)
	cout<<"armstrong"<<endl;
	else
	cout<<"not armstrong : "<<endl;

}
