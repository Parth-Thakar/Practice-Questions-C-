#include<iostream>
using namespace std;
void select (int arr[],int size)
{
	int j,min;
	for(int i =0;i<size;i++)
	{
		min = i;
		for(j = i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
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
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={5,4,3,2,1};
	select(arr,5);
	print(arr,5);
}
