#include<iostream>
#include<vector>
using namespace std;
bool is_pr(int f,int n)
{
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		v.push_back(i+1);
	}
	for(int i =0;i<n;i++)
	{
		if(f==v[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int arr[5]={3,1,2,5,3};
	int n = 5;
	
	for(int i=0;i<n;i++)
	{
		if(is_pr(arr[i],n)==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	
}
