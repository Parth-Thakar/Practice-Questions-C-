#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int digit;
	cin>>digit;
	
	int cp = digit;
	int n=0;
	while(cp!=0)
	{
		cp=cp/10;
		n++;
	}
	
	int check = digit;
	int temp,res =0;
	while(digit!=0)
	{
		temp = digit % 10;
		res = res + pow(temp,n);
		digit = digit/10;
	}
	if(res == check)
	{
		cout<<"armstrong number :"<<endl;
	}
	else
	cout<<"not an armstrong number :"<<endl;
	
}
