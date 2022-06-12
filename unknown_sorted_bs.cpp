#include<iostream>
using namespace std;
int abs(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
		{
			start = mid + 1;
		}
		else if(key<arr[mid])
		{
			end = mid -1;
		}
		mid = start + (end -start)/2;
	}
	return -1;
}
int dbs(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key<arr[mid])
		{
			start = mid + 1;
		}
		else if(key>arr[mid])
		{
			end = mid -1;
		}
		mid = start + (end -start)/2;
	}
	return -1;
}
int main()
{
	int arr[5];
	
	cout<<"enter the numbers in the sorted manner :"<<endl;
	for(int i = 0;i<5;i++)
	{
		cin>>arr[i];
	}
	if(arr[0]>arr[1])
	{
		cout<<"idex :"<<dbs(arr,5,4)<<endl;	
	}
	else if(arr[0]<arr[1])
	{
		cout<<"idex :"<<abs(arr,5,4)<<endl;	
	}
}
