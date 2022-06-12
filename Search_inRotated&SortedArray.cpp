#include<iostream>
using namespace std;
int bs(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid = start +(end - start)/2;
	
	while(start <= end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[mid]<arr[mid+1])
		{
			end = mid - 1;
		}	
		else
		{
			start = mid+1;
		}
		mid = start = (end - start )/2;
	}	
	return -1;
}
int main()
{
	int arr[5]={7,9,1,2,3};
	
	cout<<bs(arr,5,2);
	
}
