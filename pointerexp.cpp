#include<iostream>
using namespace std;
int main()
{
	int num=2;
	int *n1=&num;
	int *n2 = n1;
	
	cout<<n2<<" = "<<n1<<endl;
}
