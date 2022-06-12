#include<iostream>
using namespace std;
int rev(int arr[],int size)
{
	int start =0;
	int end=size-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[100]={1,2,3,4,5};
	rev(arr,5);
	print(arr,5);
}
