#include<iostream>
using namespace std;
void buble(int arr[],int size)
{
	for(int i =0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
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
	int arr[5]={1,2,3,4,5};
	
	buble(arr,5);
	print(arr,5);
}
