#include<iostream>
using namespace std;
void buble(int arr[],int size)
{
	for(int i=0;i<size;i++)
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
int main()
{
	int n;
	cout<<"enter the size : "<<endl;
	cin>>n;
	int* arr = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	buble(arr,n);
	
	cout<<arr[n-k];
}
