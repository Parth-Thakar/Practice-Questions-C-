#include<iostream>
using namespace std;
void atr(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		swap(arr[i],arr[i+1]);
	}
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	atr(arr,5);
	print(arr,5);
}
