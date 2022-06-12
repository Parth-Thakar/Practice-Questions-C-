#include<iostream>

using namespace std;

void merge(int arr[],int l,int mid,int r)
{
	while(l<mid && mid+1<r)
	{
		if(arr[])
	}
	
	
}

void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid = (l=r)/2;
		
		mergesort(arr,l,mid);
		
		mergesort(arr,mid+1,r);
		
		merge(arr,l,r,mid);
	}
}

int main()
{
	int arr[5]={3,5,4,2,1};
	
	mergesort(arr,0,4);
	
}
