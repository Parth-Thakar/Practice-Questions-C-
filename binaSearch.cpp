#include<iostream>
using namespace std;

int bs(int arr[], int s, int x)
{
	int start =0;
	int end = s-1;
	int mid = (start+end)/2;
	
	
	while(start<=end)
	{
		if(arr[mid]==x)
		{
			return mid;
		}
		// right part
		if(x>arr[mid])
		{
			start = mid+1;
			
		}
		else {
			end=mid-1;
		}
		
		mid = (start+end)/2;
	}
	return -1;
}

int main()
{
	int arr[5]={1,2,3,4,5};
	
	
	//cout<<"enter the value that you want to search in the arr:"<<endl;
	//cin>>key;
	int index = bs(arr,5,2);
	cout<<"index :"<<index<<endl;
	
}
