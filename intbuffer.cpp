#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int digit;
	int temp;
	int rev;
	cin>>digit;
	while(digit!=0)
	{
		temp = digit % 10;
		if(rev>INT_MAX/10 || rev<INT_MIN/10 )
		{
			cout<<"int bufferoverflow :"<<endl;
			return 0;
		}
		rev = (rev*10)+temp;
		digit = digit/10;
	}
	cout<<rev;
}
