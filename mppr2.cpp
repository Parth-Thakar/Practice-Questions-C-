#include<iostream>
using namespace std;
int mp(int arr[],int size)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start < end)
	{
		if(arr[mid]<arr[mid+1])
		{
			start = mid+1;
		}
		else if(arr[mid]>arr[mid+1])
		{
			end = mid;
		}
		mid = start +(end - start)/2;
	}
	return start;
}
int main()
{
	int arr[6]={7,8,9,3,2,1};
	
	cout<<"index of peak  : "<<mp(arr,6)<<endl;
	
}

