#include<iostream>
using namespace std;
int bs(int arr[],int size,int key)
{
	int start =0;
	int end = size-1;
	int mid = start+end/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+end/2;
	}
	return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int r = bs(arr,5,4);
	cout<<r;
}
