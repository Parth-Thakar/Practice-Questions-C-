#include<iostream>
using namespace std;
int sum(int x, int y)
{
	int sum1;
	sum1=x+y;
	return sum1;
}
int main()
{
	int z,i,j;
	cout<<"enter the values :"<<endl;
	cin>>i>>j;
	z = sum(i,j);
	cout<<"the result is : "<<z<<endl;
} 
