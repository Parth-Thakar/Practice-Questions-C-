#include<iostream>
using namespace std;
int findfirst(int arr[],int size,int x)
{
	int start =0;
	int end = size-1;
	int mid = start+(end-start)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==x)
		{
			ans = mid;
			end = mid-1;
		}
		// right part
		if(x>arr[mid])
		{
			start = mid+1;			
		}
		else {
			end=mid-1;
		}
		
		mid = start+(end-start)/2;
	}
	return ans;
}
int findlast(int arr[],int size,int x)
{
	int start =0;
	int end = size-1;
	int mid = start+(end-start)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==x)
		{
			ans = mid;
			start = mid+1;
		}
		// right part
		if(x>arr[mid])
		{
			start = mid+1;			
		}
		else {
			end=mid-1;
		}
		
		mid = start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr[5]= {1,2,3,3,5};
	
	cout<<"1st occ "<<findfirst(arr,5,3)<<endl;
	cout<<"last occ "<<findlast(arr,5,3)<<endl;
	
}
