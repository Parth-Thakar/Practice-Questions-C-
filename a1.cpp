#include<iostream>
using namespace std;
void bub(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}

int main()
{
	int arr[5]={1,2,23,444,6};
	
	bub(arr,5);
	print(arr,5);
}
