#include<iostream>
using namespace std;
int binsearch(int arr[],int size,int key)
{
	int start =0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end) 
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	return -1;
}
int main()
{ 
   int arr[6]={12,23,25,37,90};
   int result=binsearch(arr,6,37);
   cout<<result<<endl;
	
}

