#include<iostream>
using namespace std;
void swap1(int arr[],int size)
{
	for(int i=0; i<size; i+=2)
	{
		if(i+1 < size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int arr1[5]={1,2,3,4,5};
	
	swap1(arr1,5);
	print(arr1,5);

}
