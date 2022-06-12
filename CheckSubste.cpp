#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool binary(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return true;
		}
		if(key>arr[mid])
		{
			start = mid +1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		mid = start+(end-start)/2;
	}
	return false;
}
int main()
{
	int arr1[5] ={23,43,0,45,21};
	int arr2[3]={23,450,0};
	
	sort(arr1,arr1+5);
	
	if(binary(arr1,5,arr2[0]) && binary(arr1,5,arr2[1]) && binary(arr1,5,arr2[2]))
	{
		cout<<"Subset :"<<endl;
	}
	else
	{
		cout<<"not Subset : "<<endl;
	}
	
}













// arr1[5] = {23,43,0,45,21}
// arr2[3] = {23,45,0};



