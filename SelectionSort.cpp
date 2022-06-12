#include<iostream>
using namespace std;
void selection(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int mi= i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[mi])
			mi=j;
		}
		swap(arr[mi],arr[i]);
	}
	
}
int main()
{
	int arr[5]={1,4,32,5,6};
	selection(arr,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
