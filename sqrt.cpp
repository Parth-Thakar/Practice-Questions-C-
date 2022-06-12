#include<iostream>
using namespace std;
int sqrt(int n)
{
	int start  =0;
	int end = n;
	int mid = start +(end - start)/2;
	int ans;
	while(start <=end)
	{
		int  square = mid*mid;
		
		if(square == n)
		{
			return mid;
		}
		else if(square < n)
		{
			ans = mid;
			start = mid +1;
		}
		else
		{
			end = mid-1;
		}
		mid  = start+(end - start)/2;
	}
	return ans;
}
int main()
{
	cout<<sqrt(25)<<endl;
}
