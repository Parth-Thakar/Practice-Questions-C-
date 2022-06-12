#include<iostream>
using namespace std;
int max(int i, int j)
{
	if(i>j)
	return i;
	else 
	return j;
}
int main()
{
	int i,j,k,l;
	int a,b,c;
	cout<<"enter the 4 number :"<<endl;
	cin>>i>>j>>k>>l;
	a=max(i,j);
	b=max(k,l);
	c=max(a,b);
	cout<<"the greatest number is ==> "<<c<<endl;
		
}
