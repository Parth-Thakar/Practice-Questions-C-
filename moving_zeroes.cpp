#include<iostream>
using namespace std;
void mv(int arr[],int size)
{
	int i=0;
	for(int j = 0;j<size;j++)
	{
		if(arr[j]!=0)
		{
			swap(arr[j],arr[i]);
			i++;
		}
	}
}
void print(int arr[],int size)
{
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[5]={1,2,0,3,0};
	
	mv(arr,5);
	
	print(arr,5);
}
