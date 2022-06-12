#include<iostream>
using namespace std;
void update(int& x)
{
	x++;
	
}
int main()           
{
	int i= 5;
	
	update(i);     // int& x = i; || int x = i;
	
	cout<<i;
}
