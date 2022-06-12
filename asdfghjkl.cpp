#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
	int mid = s+(e-s)/2;
	int s1 = mid-s+1;
	int s2 = e-mid;
	
	int* arr1 = new int[s1];
	
	int* arr2 = new int[s2];
	int k=s;
	
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	k = mid+1;
	for(int j=0;j<s2;j++)
	{
		arr2[j]= arr[k++];
	}
	
	int f = 0;
	int se = 0;
	k = s;
	
	while(f<s1 && se<s2)
	{
		if(arr1[f]>arr2[se])
		{
			arr[k++]=arr2[se++];
		}
		else
		{
			arr[k++] = arr1[f++];
		}
		
	}
}

void mergeSort(int arr[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	
	int mid = s+(e-s)/2;
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	
	merge(arr,s,e);
	
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[5]={5,4,3,2,1};
	
	mergeSort(arr,0,4);
	
	print(arr,5);
}
