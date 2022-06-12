#include<iostream>
using namespace std;
void bubble(int arr[],int size)
{
	for(int i =0;i<size-1;i++)
	{
		for(int j = 0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void merge(int arr1[],int s1,int arr2[],int s2,int arr3[],int s3)
{
	int i=0;
	int k;
	for(k =0;k<s1;k++)
	{
		arr3[i++]=arr1[k];
	}
	
	for(k =0;k<s2;k++)
	{
		arr3[i++]=arr2[k];
	}
	bubble(arr3,s3);
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[4]={2,3,4,5};
	
	int arr3[9];
	
	merge(arr1,5,arr2,4,arr3,9);
	print(arr3,9);
}
