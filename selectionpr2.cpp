#include<iostream>
using namespace std;
void selection(int arr[],int size)
{
	int min;
	for(int i = 0;i<size-1;i++)
	{
		min = i;
		for(int j =i+1;j<size;j++)
		{
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		swap(arr[min],arr[i]);
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
	int arr[5]={5,4,3,2,1};
	
	selection(arr,5);
	print(arr,5);
	
}
