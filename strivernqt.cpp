#include<iostream>
using namespace std;
int rep(int arr[],int size)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	int key = 0;
	int count=0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			count++;
		}
		if(key>arr[mid])
		{
			start = mid+1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return count;
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={0,0,1,2,3};
	
	cout<<rep(arr,5);
	//print(arr,5);
}
