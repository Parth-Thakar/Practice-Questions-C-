#include<iostream>
using namespace std;
int sq(int n)
{
	int s= 0;
	int e = n;
	int mid = s+(e-s)/2;
	int ans = 0;
	while(s<=e)
	{
		int sq = mid*mid;
		if(sq == n)
		{
			return mid;
		}
		if(sq < n)
		{
			ans = mid;
			s = mid+1;
		}
		else
		{
			e = mid-1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
int main()
{
	cout<<sq(25)<<endl;
}
