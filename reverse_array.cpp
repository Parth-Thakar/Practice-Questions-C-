#include<iostream>
using namespace std;
int reverse (int arr[],int size)
{
	int start=0;
	int end=size-1;
	
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int arr1[5]={1,2,3,4,5};
	
	reverse(arr,6);
	reverse(arr1,5);
	
	print(arr,6);
}
