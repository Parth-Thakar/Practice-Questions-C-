#include<iostream>
using namespace std;
void rep(int arr[],int size)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==0)
		{
			arr[mid]=1;
		}
		if(key>arr[mid])
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	
}
