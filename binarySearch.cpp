#include<iostream>
using namespace std;
int bs(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
		mid = start + (end -start)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	
	int result = bs(arr,5,5);
		cout<<"index of arr is : "<<result<<endl;
	
	
}
