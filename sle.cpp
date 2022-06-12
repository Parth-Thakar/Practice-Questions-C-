#include<iostream>
using namespace std;
void select(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		int mi=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[mi])
			{
				mi=j;
			}
		}
		swap(arr[mi],arr[i]);
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[5]={34,1,67,71,4};
	select(arr,5);
	print(arr,5);
}
