#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e)
{   
	int mid = s+(e-s)/2;
	
	int s1=mid-s+1;
	
    int s2=e-mid;
    
	int* arr1 = new int[s1];
	int* arr2 = new int[s2];
	
	int k=s;
	
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	k = mid+1;
	for(int i=0;i<s2;i++)
	{
		arr2[i]=arr[k++];
	}
	int first=0, second=0;
	k = s;
	while(first<s1 && second<s2)
	{
		if(arr1[first]<arr2[second])
		{
			arr[k++] = arr1[first++];
		}
		else
		{
			arr[k++] = arr2[second++];
		}
	}
	while(first<s1)
	{
		arr[k++] = arr1[first++];
	}
	while(second<s2)
	{
		arr[k++] = arr2[second++];
	}
}
void Mergesort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid=s+(e-s)/2;
	
	Mergesort(arr,s,mid);
	
	Mergesort(arr,mid+1,e);
	Merge(arr,s,e);
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[5]={8,4,6,2,1};
	int n=5;
	Mergesort(arr,0,n-1);
	print(arr,n);
}
