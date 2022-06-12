#include<iostream>
using namespace std;
void sort(int arr[],int size)
{
	int t=0;
	int k = 1;
	for(int i =k;i<size;i++)
	{
		if(arr[i]==arr[t])
		{
			swap(arr[k],arr[i]);
		}
	}

	for(int i = ++k;i<size;i++)
	{
		if(arr[i]==1)
		{
			swap(arr[k],arr[i]);
		}
	}
	for(int i = ++k;i<size;i++)
	{
		if(arr[i]==1)
		{
			swap(arr[k],arr[i]);
		}
	}
	
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
	int arr[6]={0,1,2,0,1,2};
	
	sort(arr,6);
	
	print(arr,6);
}
