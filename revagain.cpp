#include<iostream>
using namespace std;
void rev(int arr[],int size,int pos)
{
	int start =pos+1;
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
	cout<<arr[i]<<endl;
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	rev(arr,5,1);
	print(arr,5);
}
