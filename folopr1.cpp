#include<iostream>
using namespace std;
int first(int arr[],int size,int key)
{
	int start =0;
	int end = size-1;
	int mid = start+(end-start)/2;
	int ans =0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			end = mid-1;
		}
		else if(key>arr[mid])
		{
			start = mid+1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}
int last(int arr[],int size,int key)
{
	int start =0;
	int end = size-1;
	int mid = start+(end-start)/2;
	int ans =0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			start = mid+1;
		}
		else if(key>arr[mid])
		{
			start = mid+1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int arr[5]={1,2,3,3,3};
	cout<<"first occ"<<first(arr,5,3)<<endl;
	cout<<"last occ"<<last(arr,5,3)<<endl;
}
