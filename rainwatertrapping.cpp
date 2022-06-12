#include<iostream>
using namespace std;
int tr(int arr[],int n)
{
	int lmax,rmax,temp;
	for(int i=1;i<n-1;i++)
	{
		lmax = arr[i];
		for(int j=0;j<=i;j++)
		{
			lmax = max(lmax,arr[j]);
		}
		rmax = arr[i];
		for(int j=i+1;j<n;j++)
		{
			rmax = max(rmax,arr[j]);
		}
		
		temp = temp + min(lmax,rmax)-arr[i];
	}
	return temp;
}
int main()
{
	int arr[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	
	cout<<tr(arr,12);
}
