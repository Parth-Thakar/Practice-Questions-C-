#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int bin(vector<int> arr,int x)
{
	int start =0;
	int end = arr.size()-1;
	int mid = start + (end-start)/2;
	
	
	while(start<=end)
	{
		if(arr[mid]==x)
		{
			return mid;
		}
		// right part
		else if(x>arr[mid])
		{
			start = mid+1;
			
		}
		else if(x<arr[mid]) {
			end=mid-1;
		}
		
	mid = start + (end-start)/2;
	}
	return -1;
}

int main()
{
	vector<int> v1;
	int j;
	for(int i =0;i<5;i++)
	{
		cin>>j;
		v1.push_back(j);
	}
	
	cout<<"index of the search key "<<bin(v1,3);
	
}
